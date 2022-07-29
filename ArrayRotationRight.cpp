#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<"Total no. of rotation ";
    cin>>d;
    for (int j = 0; j <d; j++)
    {
        int temp=arr[n-1];
        for (int i = n-1; i>=0; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
    cout<<"\n"<<"after rotation:"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}