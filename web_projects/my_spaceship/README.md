# Welcome to My Spaceship
***

## Task
The problem is to simulate the movement of a spaceship on an infinite 2D grid based on a sequence of commands given as a string.

The spaceship can receive three types of commands:

R → turn right
L → turn left
A → move forward in the current direction

The challenge is to correctly track the spaceship’s position (x, y) and its final orientation after executing all commands in the input string.
## Description
The solution processes the input string character by character.

The spaceship starts at position (0, 0) facing up.

We keep track of:

Current coordinates: x, y
Current direction index (up, right, down, left)

For each command:

R increases direction index by 1 (mod 4)
L decreases direction index by 1 (mod 4)
A moves the spaceship one step in the current direction

Finally, the function returns a string in the format:

"{x: X, y: Y, direction: 'DIRECTION'}"
## Installation
No installation is required to run this project.

If you are using Node.js, you can simply run the script file:

node my_spaceship.js
## Usage
Call the function my_spaceship with a string containing the flight path:

```
my_spaceship("RRALAA");
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
