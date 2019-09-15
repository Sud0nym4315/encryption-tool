#include <iostream>
#include <cstdlib>
#include <string>

int main() {
	cout << "\033[2J"; //clear screen

	char message[];
	char *msg = message;		//pointer to char array "message"

	cout << "Message: ";
	cin >> *msg;			//take input for char array "message"

	while(*msg) {		
		*msg += 47;		//increment letter by 47
		msg += 1;		//move to the next letter
	}

	cout << message;		//print encrypted message
