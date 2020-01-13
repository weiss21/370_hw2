/*
 * Title: palindrome.cpp
 * Abstract: This program determines if input string is a palindrome or not.
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
    
    char copystr[input.size()]; //char array for input string. Has to be after input is chosen.
    strcpy(copystr, input.c_str()); //copying string into character array
    
    int front, back;
    back = strlen(copystr) - 1;
    
    cout << "\nfront is  is: " << front << endl;
    cout << "\nback is: " << back << endl;
    while(front <= back){
        
        if(copystr[front] == copystr[back]){
            back--;
            front++;
        }
        else { 
            break;
        }
    }
    
    //cout << "\ninput is: " << copystr << endl;
    //cout << "\narray count is: " << sizeof(copystr) << endl;
    cout << "\nfront is  is: " << front << endl;
    cout << "\nback is: " << back << endl;

    if (front > back) 
        cout << "Yes, it is a Palindrome" << endl; 
    else
        cout << "No, it is not a Palindrome" << endl; 
        
    return 0;
}