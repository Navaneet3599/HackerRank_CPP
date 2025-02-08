#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* User Code: START */
class BadLengthException : public exception {
    //To define an exception which will return the size of input argument in C - string format.
    public:
    int n_out;
    BadLengthException(int n)
    {
        n_out = n + 48;
    };
    
    const char* what() const _NOEXCEPT override {
        return (const char*)(&n_out);
    }
};
/* User Code: END */

bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T = 1;
	while(T--) {
		string username = "Me";
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}