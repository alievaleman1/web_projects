# Welcome to My Levenshtein Web
***

## Task
The task is to implement a function that calculates a simplified version of the Levenshtein distance between two strings.
The function compares two strings of equal length and counts how many characters are different at the same positions.
If the strings do not have the same length, the function returns -1.

## Description
This project implements a simple version of the Levenshtein distance algorithm.

The function my_levenshtein:

First checks if both strings have the same length.
If not, it returns -1.
If they have equal length, it iterates through both strings.
For each position, it compares characters.
Every mismatch increases a counter by 1.
Finally, it returns the total number of differences.

This gives a measure of how different two strings are when compared character by character.

## Installation
No installation is required. You only need a C++ compiler.

To compile the program:

g++ main.cpp -o my_project

To run:

./my_project

## Usage
The program compares two strings of the same length and prints the number of differences between them.

If the strings are not the same size, the function returns -1.

You can test the function by compiling and running the program:

g++ main.cpp -o my_project
./my_project

Example inside main.cpp:

#include <iostream>
using namespace std;

int my_levenshtein(string s1, string s2){
    if (s1.size() != s2.size()){
        return -1;
    }
    int sum = 0;
    for (size_t i = 0; i < s1.size(); i++){
        if (s1[i] != s2[i])
            sum++;
    }
    return sum;
}

int main() {
    cout << my_levenshtein("abc", "dbc") << endl;
    return 0;
}
Expected output:

1

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
