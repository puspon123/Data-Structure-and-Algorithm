#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter" << n << "elements: ";
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter the number to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout << "element found at index:"<<i<<endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout << "element not found."<<endl;
    }
    return 0;
}
