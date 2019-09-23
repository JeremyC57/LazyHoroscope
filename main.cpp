//Authors: Jeremy Casada
#include<iostream>
#include<string>
using namespace std;

int main()
{
  //declare variables
  
  string firstName;
  string lastName;
  int lucky;
  
  //get user input

  cout << "What is Your First Name?\n";
  cin >> firstName;

  cout << "What is your Last Name?\n";
  cin >> lastName;

  //tell fortune
  cout << "Welcome, " << firstName.at(0) << "." << lastName.at(0) << "., here is your fortune...\n"; 
  cout << "your luck number is " << firstName.length() << endl;

  return 0;
}
