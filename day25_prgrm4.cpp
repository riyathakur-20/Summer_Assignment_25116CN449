#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of words: ";
    cin>>n;

    char word[n][50], temp[50];

    cout<<"Enter words:\n";

    for(int i=0;i<n;i++)
        cin>>word[i];

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }

    cout<<"Words sorted by length:\n";

    for(int i=0;i<n;i++)
        cout<<word[i]<<endl;

    return 0;
}