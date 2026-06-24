//Write a program to Print prime numbers in a range. 

#include <iostream>
using namespace std;

int main() {
    int start, end, i, j, flag;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers are: ";

    for(i = start; i <= end; i++) {

        if(i <= 1)
            continue;

        flag = 1;

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            cout << i << " ";
    }

    return 0;
}