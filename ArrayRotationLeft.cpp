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
    for (int j = 0; j < d; j++)
    {
        int temp=arr[0];
        for (int i = 0; i < n-1; i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    cout<<"\n"<<"after rotation:"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}