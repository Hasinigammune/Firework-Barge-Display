# Firework-Barge-Display
This project simulates a firework barge display, where a barge is loaded with fireworks, rockets, and flower-type explosions. The barge can ignite the fireworks, producing a colorful display. The program demonstrates object-oriented principles such as pointers, vectors, and dynamic memory allocation in C++.

Here is a sample README file you can use for your GitHub repository:

---

# Firework Barge Simulation

## Project Description

This project simulates a **firework barge** display, where a barge is loaded with fireworks, rockets, and flower-type explosions. The barge can ignite the fireworks, producing a colorful display. The program demonstrates object-oriented principles such as pointers, vectors, and dynamic memory allocation in C++.

## Classes and Functionality

### 1. **Firework**
- The base class representing a generic firework with a method to simulate an explosion.
- Derived classes include specific types of fireworks such as rockets and flowers, each with different explosion messages.

### 2. **Barge**
- The `Barge` class contains a collection of `Firework` pointers and manages the fireworks loaded onto the barge.
- **Data members:**
  - A vector of `Firework*` to hold the fireworks.
  - A string `name` to store the name of the barge.
  
- **Methods:**
  - `Barge(string name)`: Constructor to initialize the barge with a name.
  - `LoadFirework(Firework* firework)`: Adds a firework to the barge.
  - `Ignite()`: Triggers the fireworks on the barge, outputting the name of the barge followed by each firework's explosion.

### 3. **Main Program (Part 3)**

The main program offers the following options:
- **Option 1:** Empty the barge vector.
- **Option 2:** Create a new barge, assign a name, and load it with random fireworks (rockets, flowers, etc.).
- **Option 3:** Traverse the barge vector and ignite the firework display.
- **Option 4:** Exit the program.

### 4. **Firework Types**
The firework types are represented by integer mappings:
- 0: Plain firework
- 1: Red rocket
- 2: White rocket
- 3: Blue rocket
- 4: Yellow flower
- 5: Purple flower
- 6: Green flower

Random numbers are used to determine which type of firework is loaded onto the barge.

## Sample Output

```
Barge Simone sets off its display!
The sky is lit up by a bright blue flower of sparkles!
The sky is lit up by a bright green flower of sparkles!
The sky is lit up by a bright red rocket that detonates!
...
The firework goes off with a bang!
```
