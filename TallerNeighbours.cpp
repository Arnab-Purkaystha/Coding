#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        cin >> n;
        int arr[n];
        int count=0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            if(i==0)
            {
                if(arr[i]>arr[i+1]){
                    cout<<i<<" ";
                    count++;
                }
            }
            else if(i==n-1)
            {
                if(arr[i]>arr[i-1])
                {
                    cout<<i<<" ";
                    count++;
                }
            }
               else if(i>0 && i<(n-1))
               {
                   if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                {
                    cout << i<<" ";
                    count++;
                }
               }
                
               
        }
        
        if(count==0){
                cout<<"-1"<<" ";
            }
        cout<<endl;
    }
    return 0;
}