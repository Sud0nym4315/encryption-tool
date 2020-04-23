#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

// The sample code below main() is the template code to include multiple
// encryption schemes.

//this is xor encryption
//ONLY ERROR:  NO OUTPUT TO TEXT FILE.

char encryptDecrypt(char inpString[]) 
{ 
    // Define XOR key 
    // Any character value will work 
    int i;
    char xorKey = 'P'; 
  
    // calculate length of input string 
    int len = strlen(inpString); 
  
    // perform XOR operation of key 
    // with every caracter in string 
    for (i = 0; i < len; i++) 
    { 
        inpString[i] = inpString[i] ^ xorKey;
        std::cout << inpString[i];
    } 
    return inpString[i]; // dependancy for line 51
} 

void a() {
    std::ofstream file("message.txt", std::ios::app);
    char str[30], choice[2]; 
    std::cout << "\n";
    std::cin.getline(str, sizeof(str));
    
    if(strcmp(str, "qwerty") == 0) {
        std::cout << "Are you sure you want to quit? [y/n]: ";
        std::cin.getline(choice, sizeof(choice));
        
        if(strcmp(choice, "y") == 0) {
            file.close();
            std::cout << "\nexiting\n\n";
            exit(0);
        } else {
            a();
        }
    } else {
        int eSize = sizeof(str);
        char edStr = {encryptDecrypt(str)};
        file << edStr; //output encrypted text to file that can be sent.
        a();   
    }
}
  
// Driver program to test above function 
int main() 
{ 
    system("clear");
    std::cout << "Welcome to Sud0nym's XOR Encryption Program.\n\n";
    std::cout << "Instructions:\n\ttype [enter] after every word. no spaces! when you are done, type 'qwerty'. the program will exit.\n you can view the encrypted/decrypted message in a text file in the current directory\n\n\n";
    std::cout << "type: \n\t";
    a();
    return 0;
    
    
}


/*



Ceasar CIpher Implementation

// A C++ program to illustrate Caesar Cipher Technique 
#include <iostream> 
using namespace std; 
  
// This function receives text and shift and 
// returns the encrypted text 
string encrypt(string text, int s) 
{ 
    string result = ""; 
  
    // traverse text 
    for (int i=0;i<text.length();i++) 
    { 
        // apply transformation to each character 
        // Encrypt Uppercase letters 
        if (isupper(text[i])) 
            result += char(int(text[i]+s-65)%26 +65); 
  
    // Encrypt Lowercase letters 
    else
        result += char(int(text[i]+s-97)%26 +97); 
    } 
  
    // Return the resulting string 
    return result; 
} 
  
// Driver program to test the above function 
int main() 
{ 
    string text="ATTACKATONCE"; 
    int s = 4; 
    cout << "Text : " << text; 
    cout << "\nShift: " << s; 
    cout << "\nCipher: " << encrypt(text, s); 
    return 0; 
} 




ROT47 cipher Implementation

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
    return 0;
}

*/
