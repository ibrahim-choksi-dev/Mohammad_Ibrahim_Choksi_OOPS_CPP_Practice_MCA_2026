// Write a program to demonstrate use of pointers

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a; // ptr stores the address of a

    cout << "The value is: " << a << endl;         // value (10)
    cout << "The address of a is: " << &a << endl; // address of(a)
    cout << "Same address of &a: " << ptr << endl; // same address, since ptr = &a;
    cout << "The value shows same as a in *ptr: " << *ptr << endl; //dereference: value AT that address

    *ptr = 25; //change the value of 'a using pointer dereferencing
    cout <<"After using new value 25, value of a is: " << a <<endl; //value changed here as 25 
    cout <<"Now see address after value 25 address of a is: " << ptr <<endl; 
    return 0;
}