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
        sort(arr,arr+n);
        int count=0;
        for (int i = n-1; i >=0; i--)
        {
            int j=0;
            int k=i-1;
            while(j<k)
            {
                if(arr[i]==arr[j]+arr[k])
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    count++;
                    break;
                }
                else if(arr[i]>arr[j]+arr[k])
                    j++;
                else if(arr[i]<arr[j]+arr[k])
                    k--;
            }
            if(count!=0)
                break;
        }
        if(count==0)
            cout<<"-1";
        
    }
    return 0;
}