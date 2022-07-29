#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, j, a=0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            if (arr[0] > arr[1])
            {
                 cout<<"0";
                 a++;
                 break;
            }
            if(arr[n-2]<arr[n-1]){
                cout<<n-1;
                a++;
                break;
            }    
        }
        
        cout << " ";

        for (i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                cout << i<<" ";
                a++;
            }
        }
        if(a==0){
            cout<<"-1";
        }
        cout<<endl;
    }
}