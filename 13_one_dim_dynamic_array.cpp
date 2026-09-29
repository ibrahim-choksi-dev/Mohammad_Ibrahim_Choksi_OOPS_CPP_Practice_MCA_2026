// Program to create a one dimensional Dynamic Array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a size of an array: ";
    cin >> n;

    int *arr = new int[n]; // dynamic array of size n

    cout << "Enter " << n << " elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // input array elements from user
    }

    cout << "Array Elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // print array elements
    }
    cout << endl;

    // free the dynamically allocated memory
    delete[] arr;

    return 0;
}