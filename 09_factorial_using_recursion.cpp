// Program to calculate the Factorial of a number using recursion

#include <iostream>
using namespace std;

int factorial(int n) // create a recursive function to calculate the factorial of a number
{
    if (n == 0 || n == 1) // base case: factorial of 0 and 1 is 1
    {
        return 1; // start returning the value 1 when n is 0 or 1
    }
    else
    {
        return n * factorial(n - 1); // recursive case: multiply n with the factorial of (n-1) until it reaches the base case
    }
}

int main()
{

    int num;
    cout << "Enter a integer number to find the factorial using recursion: ";
    cin >> num;

    if (num < 0) // check if the number is negative
    {
        cout << "Factorial is not defined for negative numbers." << endl; // print an error message for negative numbers
        return 1;                                                         // return 1 to indicate an error
    }
    else
    {

        cout << "Factorial of " << num << " is: " << factorial(num) << endl; // call the recursive function and print the result

        return 0;
    }
}