#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    // Complete the code.
    //Create a string array to hold textual representation of numbers from 0 ~ 9
    string text[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b = 0;
    
    cin >> a;
    cin >> b;
    
    for(int i = a; i <= b; i++)
    {
        //If number is greater than 9, then print whether it is even or odd
        if(i > 9)
            if(i & 1)   //Using bitAND operator to check whether number is even/odd ---> Bitwise operations are faster compared to % or / operators
                cout << "odd\n";
            else
                cout << "even\n";
        else
            cout << text[i-1] << "\n";
    }
    
    return 0;
}