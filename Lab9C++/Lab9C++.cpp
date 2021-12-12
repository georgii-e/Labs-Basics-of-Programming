// Lab9C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
string removal_by_length (string, int);
int main()
{
    cout << "Write a phrase: ";
    string phrase;
    getline(cin, phrase);
    cout << "Input number:";
    int length;
    cin >> length;
    string new_phrase = removal_by_length(phrase+" ", length); //пробел чтобы последнее слово отделялось 
    cout << "Changed phrase:" << new_phrase;

}
string removal_by_length(string phrase, int length)
{
    size_t pos = 0;
    string word;
    string delimiter = " ";
    string new_phrase = "";
    while ((pos = phrase.find(delimiter)) != string::npos)
    {
        word = phrase.substr(0, pos);
        if (word.length() >= length)
            new_phrase += word + " ";
        phrase.erase(0, pos + delimiter.length()); //+1
    }
    return new_phrase;
} 

