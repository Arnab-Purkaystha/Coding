#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int mul=1;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            mul=mul*arr[i];
        }
        cout<<mul<<"\n";
    }
    
    return 0;
}