// Generate a piglatin for a given string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a word: "; //this is only for one word, if we want to take a sentence then we use getline(cin, s)
    cin >> s;

    char first = s[0]; // find the first character of the string

    if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u' || first == 'A' || first == 'E' || first == 'I' || first == 'O' || first == 'U')
    {
        /* code */
        // vowel then
        s = s + "ay";
    }
    else
    {
        // constant then
        s = s.substr(1) + first + "ay"; // substr means remove first word and other words remain same
    }

    cout << "Piglatin is: " << s;

    return 0;
}



