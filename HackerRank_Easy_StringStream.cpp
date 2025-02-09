#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Solution 1 --> without using stringstream class
    vector<int> arr;
    int sign = 1;
    int temp_int = 0;
    string temp = "";
	for(int i = 0; i < str.length(); i++)
    {
        if(str.at(i) == ',')
        {
            arr.push_back(temp_int*sign);
            temp_int = 0;
            sign = 1;
        }
        else
        {
            if(str.at(i) == '-')
            {
                sign = -1;
                continue;
            }
            temp_int = temp_int*10 + ((char)str.at(i)-48);
        }
    }
    if(temp_int != 0)
        arr.push_back(temp_int*sign);

    //Solution 2 --> while using stringstream class
    /*
    stringstream ss(str);
    string temp;

    while(getline(ss, temp, ',')) //Paring through string for each , separated value
        arr.push_back(stoi(temp));  //Converting string to integer and storing it in vector
    */
    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
