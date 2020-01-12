/*
 * Title: palindrome.cpp
 * Abstract: This program reads a text file and shows the min distance between two numbers.
 * Author: Wais Robleh
 * ID: 1624
 * Date: 01/10/2020
 */
 
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    
    string input;
    
    cout << "Input string: ";
    cin >> input;
    
    char copystr[input.size() + 1]; //char array for input string. Has to be after input is chosen.
    strcpy(copystr, input.c_str()); //copying string into character array
    cout << "\ninput is: " << copystr << endl;
    cout << "\narray count is: " << sizeof(copystr) << endl;
    

    
    return 0;
}