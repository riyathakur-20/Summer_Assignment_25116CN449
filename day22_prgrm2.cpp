#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int words = 1;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            words++;
    }

    cout << "Number of Words = " << words;

    return 0;
}