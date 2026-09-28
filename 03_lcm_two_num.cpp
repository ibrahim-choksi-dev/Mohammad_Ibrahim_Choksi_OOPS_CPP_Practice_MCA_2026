//Print the LCM of two numbers
#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter two numbers to calculate the LCM: ";
    cin >> a >> b;

    if(a <= 0 || b <= 0)
    {
        /* code */
        cout<<"Please enter a valid number";
        return 1; //return an error code
    }
    
    int original_a = a; // Store the original value of a
    int original_b = b; // Store the original value of b

    while (b !=0)
    {
        /* code */
        int temp = b; // Store the value of b in a temporary variable
        b = a % b; // Update b to be the remainder of a divided by b
        a = temp; // Update a to be the original value of b
    }
    int lcm = (original_a / a) * original_b;   // pehle divide, phir multiply

    cout << "The LCM of " << original_a << " and " << original_b << " is: " << lcm << endl;

    return 0;
}