#include <iomanip>
#include <string> 
#include <iostream>

using namespace std;
string removal_by_length(string, int);
int main()
{
    cout << "Write a phrase: ";
    string phrase;
    getline(cin, phrase);
    cout << "Input number:";
    int length;
    cin >> length;
    string new_phrase = removal_by_length(phrase + " ", length); //пробел чтобы последнее слово отделялось 
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




/*
#include <iostream>
#include <stdio.h>
using namespace std;


int create_words(char[], char[][20]);
int erase_words(char[][20], int, int, char[][20]);
int main()
{
    int const size1 = 255;
    int const size2 = 20;
    char array_of_words[size2][size2];
    char array_of_new_words[size2][size2];
    char string[size1];
    cout << "Write a phrase: ";
    gets_s(string);
    cout << "Write a number: ";
    int length;
    cin >> length;
    int number_of_words=create_words(string, array_of_words);
    int new_number_of_words=erase_words(array_of_words, length, number_of_words, array_of_new_words);
    cout << "New phrase: ";
    for (int j=0; j< new_number_of_words; j++)
        cout << array_of_new_words[j] << " ";
} 
int create_words(char str[], char mas[][20])
{
    int words_counter=0;
    const char *delimiter = "., ";
    char* p_word;
    char* p_next_word = NULL;
    p_word = strtok_s(str, delimiter, &p_next_word);
    while (p_word != NULL)
    {
        strcpy_s(mas[words_counter], sizeof mas[words_counter], p_word);
        words_counter++;
        p_word= strtok_s(NULL, delimiter, &p_next_word);
    }
    return words_counter;
}
int erase_words(char mas[][20], int length, int number_of_words, char array_of_new_words[][20])
{
    int j = 0;
    for (int i=0; i< number_of_words;i++)
        if (strlen(mas[i]) >= length)
        {
            strcpy_s(array_of_new_words[j], sizeof array_of_new_words[j], mas[i]);
            j++;
        }
    return j;
}
*/