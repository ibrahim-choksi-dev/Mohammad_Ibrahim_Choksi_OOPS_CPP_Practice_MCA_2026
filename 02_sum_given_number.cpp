// Print the sum of the digits of a given number.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to calculate the sum of the digits of a given number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1; //exit the program with an error code
    }

    int sum = 0;
    while (n > 0)
    {
        /* code */
        int digit = n % 10; // Get the last digit
        sum = sum + digit; // Add the last digit to the sum
        n = n / 10; // Remove the last digit from the number
    }

    cout << "Sum is: " << sum << endl;
    return 0;
}