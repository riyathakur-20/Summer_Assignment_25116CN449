#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence, word, longest = "";

    cout << "Enter sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while (ss >> word) {
        if (word.length() > longest.length())
            longest = word;
    }

    cout << "Longest word: " << longest;

    return 0;
}