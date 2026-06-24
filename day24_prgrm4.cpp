#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    string result = "";

    for (int i = 0; i < str.length(); i++) {
        bool found = false;

        for (int j = 0; j < result.length(); j++) {
            if (str[i] == result[j]) {
                found = true;
                break;
            }
        }

        if (!found)
            result += str[i];
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}