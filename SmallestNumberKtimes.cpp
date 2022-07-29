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
        sort(arr, arr + n);
        int k;
        cin>>k;
        int i=0;
        while (i < n) {
            int j, count = 1;
            for (j = i + 1; j < n && arr[j] == arr[i]; j++)
                count++;
    
            if (count == k)
                cout<< arr[i];
    
            i = j;
    }
        
    }
    return 0;
}