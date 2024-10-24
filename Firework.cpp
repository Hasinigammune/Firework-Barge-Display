#include<iostream>
#include <cstdlib>
#include<vector>

using namespace std;

class Firework
{
protected :
    string color;

public :
    virtual void explode()
    {
    cout<<"The firework goes off with a bang"<<endl;
    }
};

class Rocket : public Firework
{
public :
    Rocket()
    {
    this->color="red";
    }
    Rocket(string color)
    {
    this->color=color;
    }
    void explode()
    {
    cout<<"The sky is split by a column of "<<this->color<<" fire that then detonates!!"<<endl;
    }
};

class Flower : public Firework
{
public :

    Flower()
    {
    this->color="Yellow";
    }
    Flower(string color)
    {
    this->color=color;
    }
    void explode()
    {
    cout<<"The sky is lit up by a bright "<<this->color<<" flower of sparkles!"<<endl;
    }
};

class Barge
{
private :
    vector<Firework*> load;
    string name;

public :
    Barge(string name)
    {
    this->name=name;
    }

    void loadFirework(Firework* nextfirework)
    {
    this->load.push_back(nextfirework);
    }

    void ignite()
    {
    cout<<"Barge "<<this->name<<" sets off its display!"<<endl;
    Firework *temp;

    for(Firework *temp: load)
    {
    temp->explode();
    }
    }

};

void menu();
string setName(string newName);

int main()
{
	menu();
	return 0;
}


void menu()
{
srand(clock());
int myRandInt=0;
string newName;
string Barge_name=setName(newName);
Barge obj(Barge_name);
int loop=0;
Firework *firework = nullptr;
vector <Firework *> baseVector;
for (loop = 0; loop < 13; loop++)
{
myRandInt=rand()%6;

switch (myRandInt)
		{
		case 0:
			firework=new Firework();
			baseVector.push_back(firework);
			break;
		case 1:
			firework=new Rocket("Red");
			baseVector.push_back(firework);
			break;
		case 2:
			firework=new Rocket("White");
			baseVector.push_back(firework);
			break;
        case 4:
			firework=new Rocket("Blue");
			baseVector.push_back(firework);
			break;
		case 5:
			firework=new Flower("Yellow");
			baseVector.push_back(firework);
			break;
		case 6:
			firework=new Flower("Purple");
			baseVector.push_back(firework);
			break;
        default:
            firework=new Flower("Pink");
			baseVector.push_back(firework);
			break;
		}
		cout << endl;
        
        obj.loadFirework(firework);
	}

obj.ignite();

return ;
}

string setName(string newName)
{
    cout<<"Enter the name of the barge"<< endl;
    cin >> newName;
    return newName;
}