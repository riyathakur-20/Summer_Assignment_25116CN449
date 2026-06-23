#include <iostream>
using namespace std;

int main()
{
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << "Pair Found: "
                     << arr[i] << " and " << arr[j];
                found = true;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
        cout << "No Pair Found";

    return 0;
}