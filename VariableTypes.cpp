
#include <iostream>

using namespace std;

int main() {

  int a = 40, b = 0, c = 20; // int stores from -2billion to +2 billion, 4 BYTES

  cout << "a : " << a << " address: " << &a << endl;
  cout << "b : " << b << " address: " << &b << endl;
  cout << "c : " << c << " address: " << &c << endl;

  short t1 = 5; //short int stores from -32768 to 32767, 2 BYTES
  cout << "t1 : " << t1 << " address: " << &t1 << endl;


  unsigned short int t10 = 37000; //for unsigned short int, 0 to 65535; use when you only need positive numbers
  cout << t10 << endl;

  float t2 = 5.12; //4 BYTES numbers that are up to 38 decimal places
  double t3 = 5.12; // 8 BYTES numbers that are up to 308 decimal places

  cout << "t2 : " << t2 << " address: " << &t2 << endl;
  cout << "t3 : " << t3 << " address: " << &t3 << endl;

  char t4; // characters

  t4 = 'a';
  cout << "t4 : " << t4 << " address: " << &t4 << endl;

  string t5 = "Hello World!";
  cout << t5 << endl;

  string x = "part1";
  string y = "part2";
  string combinedStrings = x + " " + y;

  cout << combinedStrings << endl;

  bool t6 = true; // true returns 1.
  bool t7 = false; // false returns 0.
  bool t8 = 39912; // every number besides 0 is true.
  bool t9 = 0; // 0 is ALWAYS false;

  cout << t6 << endl;
  cout << t7 << endl;
  cout << t8 << endl;
  cout << t9 << endl;

  const string NAME = "Matt Rice";
  cout << NAME << endl;
  // NAME = "Jim Butts" ----- this won't compile.
}
