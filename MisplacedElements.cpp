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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i]=arr[i];
        }
        sort(b,b+n);
        int count=0;
        for (int i = 0; i < n; i++)
        {
           if (b[i]!=arr[i])
                count++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}