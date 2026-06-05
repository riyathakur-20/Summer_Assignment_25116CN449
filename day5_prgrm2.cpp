//Write a program to Check strong number.

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num, original, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if(sum == original)
        cout << original << " is a Strong Number";
    else
        cout << original << " is not a Strong Number";

    return 0;
}