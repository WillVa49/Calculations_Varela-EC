/* Wilfrido Varela Dr_T COSC 1436 2-17-2020
C++ 
What this program does is that it it works with various arithmetic operators in C++. It calculates numbers that the user inputs and outputs the answer. 
*/

#include <iostream>
#include "Input_Validation_Extended.h"
#include<string>
using namespace std;

int main() 
{
  //Declaring and Initializing variables
  double number1 = 0.0, number2 = 0.0;
  int number3 = 0, number4 = 0;
  double addition = 0.0, subtraction = 0.0, multiplication = 0.0, division = 0.0;
  int modulus = 0;
  char exit = '\0';
  
 //Inputting numbers 
do
 {
   //Clears the screen 
  cout << "\033[2J\033[1;1H";
  //Inputting "number1"
  cout << "Please enter Number 1: " << endl; 
  number1 = validateDouble(number1);
  //If 0 is inputted in "number2", then it will loop until  the user inputs any number other than 0.
 do
  {
  cout << "Please enter Number 2: " << endl; 
  number2 = validateDouble(number2);
  if (number2 == 0)
  cout << "\nError, You cannot have 0 as a denominator in the division section" << endl;
  }while (number2 ==0);
  //Inputting "number3"
  cout << "Please enter Number 3: " << endl; 
  number3 = validateInt(number3);
  //If 0 is inputted in "number4", then it will loop until  the user inputs any number other than 0.
  do
  {
    cout << "Please enter Number 4: " << endl; 
    number4 = validateInt(number4);
    if (number4 == 0.0)
      cout << "\nError, cannot have 0 in the denominator in the modulus section." << endl;
  }while (number4 == 0.0);
    
  
  //Process
  addition = number1 + number2 + number1;
  subtraction = number1 - number2;
  multiplication = number1 * number2 * number2;
  division = (number1/number2) / number1;
  modulus = number3 % number4;
  //Output
  cout << number1 << "+" << number2 << "+" << number1 << "=" << addition << endl;
  cout << number1 << "-" << number2 << "=" << subtraction << endl;
  cout << number1 << "*" << number2 << "*" << number2 << "=" << multiplication << endl;
  cout << "(" << number1 << "/" << number2 << ")" << "/" << number1 << "=" << division << endl;
  cout << number3 << "%" << number4 << "=" << modulus << endl;

  cout << "Run again? (Y or y to exit): ";
  cin >> exit;
  
 }while (exit != 'Y' && exit != 'y');
cout << "\nThanks for testing me out, goodbye..." << endl;

return 0; //Exit success
}