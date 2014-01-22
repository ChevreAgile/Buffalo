#include <stdlib.h>
#include <iostream.h>

using namespace std;


int charMatch(char& baseChar, char& testChar);
bool isValidString(char& basisString, char& testString);

int main() {};

//class definitions



//function definitions

int charMatch(char& baseChar, char& testChar) {
  if  (*baseChar == 92) { // testing for the '\' character
    
  } else if (*baseChar == '.') {

  } else if (*baseChar == '^') {

  } else if (*baseChar == '$') {

  } else if (*baseChar == '[') {

  } else if (*baseChar == ']') {
    try {
      throw 33;
    } catch (int e) {
      cout << "Error No. " << e << ". Missing left bracket\n";
    }
  }


};


bool isValidString(char& basisString, char& testString, int size_tS) {
  int i = 0;
  for (i; i < size_tS; i++) {
    int j;
    j = charMatch(*(basisString + i), *(testString + i));
    if (j) {
      i = i + j; //not so good with c++ yet, so I'll stick with this nice little hack to determine if the string is offset
    } else {
      return false;
    }
  } 
  return true;
};
