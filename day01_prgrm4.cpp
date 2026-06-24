//Write a program to Count digits in a number. 
#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0)
    {
        num = num / 10;
        count++;
    }

    cout << "Total digits = " << count;

    return 0;
}