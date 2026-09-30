// Program to create a two dimensional Dynamic Array

#include <iostream>
using namespace std;
int main()
{

    int n, m;
    cout << "Enter a two dimesional array for n and m: ";
    cin >> n >> m;

    int **arr = new int*[n];

    //loop for allocating memory to each row for columns
    for (int i = 0; i < n; i++)
    {
        
        arr[i] = new int[m];// we allocate memory for each row storing columns(m)
        }

    cout << "Enter " << n * m << " elements: " << endl; //n*m is total number of elements to enter

    for (int i = 0; i < n; i++) //n means rows
    {
        for (int j = 0; j < m; j++) // m means columns
        {
            cin >> arr[i][j]; // input array elements from user
        }
    }

    cout << "Two Dimensional Array Elements Are: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //free memory
    for(int i = 0; i < n; i++)
    {
        delete[] arr[i]; //free each row including columns
    }
    delete[] arr; //free the array of pointers
    return 0;
}