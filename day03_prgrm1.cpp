//Write a program to Check whether a number is prime.

#include <iostream>
using namespace std;

int main() {
    int n, i, flag = 1;

    cout << "Enter a number: ";
    cin >> n;

    if(n <= 1) {
        flag = 0;
    }

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        cout << n << " is a Prime Number";
    else
        cout << n << " is not a Prime Number";

    return 0;
}