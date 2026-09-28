//Print the HCF of two numbers

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers to calculate the hcf";
    cin >> a >> b;

    if (a<=0 || b<=0)
    {
        /* code */
        cout<<"Invalid input, enter a valid number";
        return 1; //returns an error code
    }

    int original_a = a; 
    int original_b = b;

    while (b !=0)
    {
        /* code */
        //eg a is 4 b is 6
        int temp = b; // in temp variable we put 6
        b = a % b; // b = 4 % 6 = 4
        a = temp; //a = 6
        //now a becomes 6 and b becomes 4
    }
    
    cout<<"HCF of " << original_a << " and " << original_b << " is: " << a << endl;
    
    return 0;
}