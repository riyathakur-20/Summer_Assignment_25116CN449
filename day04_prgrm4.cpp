//Write a program to Print Armstrong numbers in a range.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for(int num = start; num <= end; num++) {

        int originalNum = num;
        int temp = num;
        int digits = 0;
        int result = 0;

        // Count digits
        while(temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;

        // Armstrong calculation
        while(temp != 0) {
            int remainder = temp % 10;
            result += pow(remainder, digits);
            temp /= 10;
        }

        if(result == originalNum) {
            cout << originalNum << " ";
        }
    }

    return 0;
}