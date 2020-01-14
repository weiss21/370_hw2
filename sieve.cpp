/*
 * Title: sieve.cpp
 * Abstract: sieve of Eratosthenes algorithm.
 * Author: Wais Robleh
 * ID: 1624
 * Date: 01/12/2020
 */
 
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;


int main(){
    
    int *p; //ptr to hold value, dynamically
    int number;
    vector<int> x;
    
    cout << "Input number: ";
    cin >> number;
    
    p = new int[number + 1]; //number + 1 for array starts at 0
    for(int i = 2; i <= number; i++){
        p[i] = i;
    }
    
    int j;
    for(int i = 2; (i * i) <= number; i++){
        if(p[i] != 0){
            j = i * i;
            while (j <= number)
            {
                    p[j] = 0;
                    j += i;
            }
        }
    }
    
    cout << "Prime numbers are: ";

        for (int i = 0; i <= number; i++)
        {
            if (p[i] != 0)
            {
                
                x.push_back(p[i]);
            }
        }
        
    // for loop used to keep commas between numbers.
    for(int k = 0; k < x.size(); k++){
        cout<< x[k];
        if (k < x.size() - 1){
            cout << ", ";
        }
    }
    cout << "\n"; //new line
    delete[] p;
    
    return 0;
}