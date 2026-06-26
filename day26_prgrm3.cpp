#include <iostream>
using namespace std;

void atm()
{
    int choice;
    float balance = 10000, amount;

    do
    {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Balance = " << balance << endl;
                break;

            case 2:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited Successfully\n";
                break;

            case 3:
                cout << "Enter Withdraw Amount: ";
                cin >> amount;
                if(amount <= balance)
                {
                    balance -= amount;
                    cout << "Please Collect Cash\n";
                }
                else
                    cout << "Insufficient Balance\n";
                break;

            case 4:
                cout << "Thank You for Using ATM";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 4);
}

int main()
{
    atm();
    return 0;
}