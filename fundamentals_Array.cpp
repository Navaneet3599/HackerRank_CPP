#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;


int main() {
    int N;  //Taking the array size as input
    cin >> N;
    
    int arr[N]; //Unlike C, C++ allows dynamic memory allocation without using malloc or calloc

    for(int i = N-1; i >= 0; i--)
        cin >> arr[i];  //Reading inputs from user and storing them in reverse order
    for(int i = 0; i < N ; i++)
        cout << arr[i] << " ";  //Printing the array
    return 0;
}