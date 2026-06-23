#include <iostream>
using namespace std;

int main()
{
    int n, key, pos = -1;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "Element found at position " << pos + 1;
    else
        cout << "Element not found";

    return 0;
}