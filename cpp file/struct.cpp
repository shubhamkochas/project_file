#include <iostream>

using namespace std;

// Student structure
struct Student {
  string name;
  int roll_number;
  int marks;
};

// main function
int main() {
  // Declare structure variable
   Student s1;
  // Declare structure pointer
  Student *ptr1;
  // Store address of structure variable in structure pointer
  ptr1 = &s1;
  
  // Set value of name
  (*ptr1).name = "John";
  // Set value of roll_number
  (*ptr1).roll_number = 1;
  // Set value of marks
  (*ptr1).marks = 50;

  // Print value of structure member
  cout << "s1 Information:" << endl;
  cout << "Name = " << (*ptr1).name << endl;
  cout << "Roll Number = " << (*ptr1).roll_number << endl;
  cout << "Marks = " << (*ptr1).marks << endl;


  return 0;
}