//46

#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n)
{
    int temp = n, sum = 0, digits = 0;

    int t = n;
    while (t > 0)
    {
        digits++;
        t /= 10;
    }

    while (n > 0)
    {
        int rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }

    return temp == sum;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (armstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}