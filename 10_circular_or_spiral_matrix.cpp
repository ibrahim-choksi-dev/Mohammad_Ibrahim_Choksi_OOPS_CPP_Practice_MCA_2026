// Display the circular matrix for a given n
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to calcualte circular/sparse matrix: ";
    cin >> n;

    int a[10][10]; //declare 10*10 array
    int top = 0, bottom = n - 1, left = 0, right = n - 1; 
    int num = 1; // matrix start from 1 and then increment
    if(n <= 0 || n > 10) 
    {
        cout << "Please enter a valid number between 1 and 10." << endl; 
        return 1;
    }

    while (top <= bottom && left <= right) 
    {
        // left to right (top row)
        for (int i = left; i <= right; i++) 
        {
            a[top][i] = num++; 
        }
        top++; 

        // top to bottom (right column)
        for (int i = top; i <= bottom; i++) 
        {
            a[i][right] = num++; 
        }
        right--; 

        // right to left (bottom row)
        for (int i = right; i >= left; i--)
        {
            a[bottom][i] = num++; 
        }
        bottom--;

        // bottom to left(left column)
        for (int i = bottom; i >= top; i--)
        {
            a[i][left] = num++; 
        }
        left++;
    }

    // print matrix
    cout << "\nCircular Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}