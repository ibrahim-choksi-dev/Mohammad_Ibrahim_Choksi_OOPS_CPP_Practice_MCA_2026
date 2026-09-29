// Program to demonstrate passing by value and reference
#include <iostream>
using namespace std;

void passByValue(int x)
{
    x = x + 10; // Creates a copy, original value remains unchanged
}

void passByRef(int &x)
{
    x = x + 10; // Modifies original variable via reference
}
int main()
{
    int a = 5;
    passByValue(a);                     // Value will remain unchanged
    cout << "After passByValue: " << a; // Output: 5 (unchanged)
    cout << endl;

    int b = 5;
    passByRef(b);                     // Value will be updated to 15
    cout << "After passByRef: " << b; // Output: 15 (modified)

    return 0;
}