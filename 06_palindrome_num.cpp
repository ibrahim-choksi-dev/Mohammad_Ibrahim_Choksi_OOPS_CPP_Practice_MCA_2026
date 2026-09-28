//check whether a given number is palindrome or not
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number to check it's a palindrome or not ";
    cin >>a;

    int original = a; //save the original value of a
    int reverse = 0;

    while (a > 0)
    {
        /* code */
        int digit = a % 10; //get the last digit 
        reverse = reverse * 10 + digit; //here we reverse the digit
        a = a / 10; //remove the last digit
    }

    if (original == reverse)
    {
        /* code */
        cout<< original << " is palindrome";
    } else{
        cout<< original << " is not palindrome";
    }
    return 0;
    
    
}