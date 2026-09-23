#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number to find whethere it's a prime number or not: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        /* code */
        bool isPrime = true; //think everytime it's prime if not then otherwise

        if (i==1)
        {
            /* code */
            isPrime = false;
        }
        else if (i==2)
        {
            /* code */
            isPrime = true;
        }
        else{
            for (int j = 2; j * j <= i; j++) 
            //only check up to sqrt(i) — any factor larger than sqrt(i) would have a matching smaller factor already found
            {
                /* code */
                if (i % j == 0) // 0 comes we say is not prime
                {
                    /* code */
                    isPrime = false;
                    break; // we cannot check more forward after 0 finds
                }
                
            }
            
        }
        if (isPrime)
        {
            /* code */
        cout << i << " is a prime number" << endl;
        }        
    }
    

    return 0;
}