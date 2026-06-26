#include <iostream>
using namespace std;

void checkEligibility(int age)
{
    if (age >= 18)
        cout << "Eligible to Vote";
    else
        cout << "Not Eligible to Vote";
}

int main()
{
    int age;

    cout << "Enter Age: ";
    cin >> age;

    checkEligibility(age);

    return 0;
}