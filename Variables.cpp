// IOstream stands for Input/Output Stream
#include <iostream>

// 'using namespace' allows you to use modules; This is needed for cout. Alternatively, I can call 'cout' by without including 'using namespace std'
// by calling 'std::cout'
using namespace std;

int main() {
    // we are initializing variable A
    int A;

    // integers can go up to 2 billion
    A = 4;

    // cout stands for Console Output
    // endl is linebreak
    cout << A << endl;

    // &var gives the object ID
    cout << &A << endl;

    A = 10;
    cout << A << endl;
    cout << &A;
    // Object ID stays the same even though variable value changes

    /*
        1. Variables can't have the same name; the latter would overwrite the former.
        2. Variables can't start with a number.
        3. Variables can't have spaces.
        4. Variables can't be reserved names.
        5. Variables should be nouns.
    */
}
