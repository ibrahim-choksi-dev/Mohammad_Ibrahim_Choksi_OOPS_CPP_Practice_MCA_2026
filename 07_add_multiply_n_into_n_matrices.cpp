// Add and multiply two n * n matrices
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to add and multiply n by n matrices: ";
    cin >> n;

    int A[10][10], B[10][10], ADD[10][10], MUL[10][10]; // here we declare 4 matrices A, B, ADD, and MUL of size 10x10

    cout << "Enter Matrix A:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin >> A[i][j];
        }
    }
    cout << "Enter Matrix B:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }

    // Logic for addition and multiplication
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ADD[i][j] = A[i][j] + B[i][j]; // add A matrices and B matrices in ADD matrices
            MUL[i][j] = 0;                 // empty box
            for (int k = 0; k < n; k++)
            {
                MUL[i][j] = MUL[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nAddition Result:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ADD[i][j] << " ";
            cout<<endl;
        }
    }

    cout << "\nMultiplication Result:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << MUL[i][j] << " ";
            cout<<endl;
        }
    }

    return 0;
}