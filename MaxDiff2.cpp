#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
         int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = (arr[i] + i);
            b[i] = (arr[i] - i);
        }
        int x = a[0], y = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > x)
            {
                x = a[i];
            }
            if (a[i] < y)
            {
                y = a[i];
            }
        }
        int ans1 = (x - y);
         x = b[0];
        y = b[0];
        for (int i = 0; i < n; i++)
        {
            if (b[i] > x)
                {
                    x = b[i];
                }
    
            if (b[i] < y)
               { 
                   y = b[i];
               }
        }
        int ans2 = (x - y);
        cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}