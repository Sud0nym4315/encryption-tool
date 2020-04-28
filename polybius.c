// CPP Program to implement polybius cipher 
#include <cmath> 
#include <iostream> 
#include <string.h>
#include <string>
using namespace std; 
  
// function to display polybius cipher text 
void polybiusCipher(string s) { 
  int row, col; 
  
  // convert each character to its encrypted code 
  for (int i = 0; s[i]; i++) { 
  
    // finding row of the table 
    row = ceil((s[i] - 'a') / 5) + 1; 
  
    // finding column of the table 
    col = ((s[i] - 'a') % 5) + 1; 
  
    // if character is 'k' 
    if (s[i] == 'k') { 
      row = row - 1; 
      col = 5 - col + 1; 
    } 
  
    // if character is greater than 'j' 
    else if (s[i] >= 'j') { 
      if (col == 1) { 
        col = 6; 
        row = row - 1; 
      } 
      col = col - 1; 
    } 
    cout << row << col; 
  } 
  
  cout << endl; 
} 
  
// Driver's Code 
int main() { 
    
  string s;
  cout << "Enter string to encrypt: ";
  getline(cin, s);
  polybiusCipher(s); 
  return 0; 
} 
