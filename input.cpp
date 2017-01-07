#include <iostream>

using namespace std;

int main() {
  int a;

  cout << "Enter a number: ";
  cin >> a; // console input

  cout << "Your number is " << a << endl; // console output
  cout << "Your number plus 2 equals " << a + 2 << endl;

  string name, surname;

  cout << "Enter your name: ";
  cin >> name;

  cout << "Enter your surname: ";
  cin >> surname;

  cout << endl;
  cout << "Your name is " + name + " " + surname + "." << endl;
  cout << "Welcome " << name << " " << surname << ".";
}
