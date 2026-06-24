#include <iostream>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (s1.length() == s2.length() &&
        (s1 + s1).find(s2) != string::npos)
        cout << "String is rotation";
    else
        cout << "String is not rotation";

    return 0;
}