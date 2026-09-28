// Fibonacci series program for a given number n means n = 10 so it goes to 0 1 1 2 3 5 8 13 21 34
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to find a fibonacci series: ";
    cin >> n;

    int a = 0, b = 1;

    cout << a << " " << b << " "; // first two number printed

    for (int i = 3; i <= n; i++)
    {
        /* code */
        int c = a + b; //next number is sum of previous two numbers
        cout << c << " ";

        a = b; //shift the value of a to next number
        b = c; //shift the value of b to next number
    }

    return 0;
}