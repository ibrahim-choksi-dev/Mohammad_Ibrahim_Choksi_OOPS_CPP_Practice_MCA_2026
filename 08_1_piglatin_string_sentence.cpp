// Generate a piglatin for a given sentence

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c); // Convert character to lowercase for uniformity
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    string sentence;
    cout << "Enter a sentence to generate a piglatin: ";
    getline(cin, sentence); // use getline to read the entire sentence including spaces

    stringstream ss(sentence);
    string word;
    string result = "";

    while (ss >> word)
    {
        /* code */
        char first = word[0]; // find the first character of the word
        if (isVowel(first))
        {
            /* code */
            result = result + word + "ay "; // if the first character is a vowel, append "ay" to the word
        }
        else
        {
            result = result + word.substr(1) + first + "ay "; // if the first character is a consonant, move it to the end and append "ay"
        }
    }

    cout << "Piglatin: " << result << endl;

    return 0;
}