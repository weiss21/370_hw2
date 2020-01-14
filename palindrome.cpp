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

using namespace std;

int main() {
    
    char *copystr;
    string input;
    
    cout << "Input string: ";
    cin >> input;
    
    copystr = new (nothrow) char[input.length()]; //char array for input string. Has to be after input is chosen.
    strcpy(copystr, input.c_str()); //copying string into character array
    
    int front, back;
    back = strlen(copystr) - 1;
    
    //cout << "\nfront is  is: " << front << endl;
    //cout << "\nback is: " << back << endl;
    
    while(front <= back){   //while front position in array is less than or equal to back position it continues.
        
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
    //cout << "\nfront is  is: " << front << endl;
    //cout << "\nback is: " << back << endl;

    //if while loop ended to completion while front is ahead then it is a palindrome. Else it is not.
    if (front > back) 
        cout << "Yes, it is a Palindrome" << endl; 
    else
        cout << "No, it is not a Palindrome" << endl; 
        
    delete[] copystr;
    return 0;
}