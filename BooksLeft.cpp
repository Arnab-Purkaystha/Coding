#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n ,k;
    cin>>n>>k;
    long arr[n];
    for (long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long count1=0;
    for (long i = 0; i < n; i++)
    {
        if(arr[i]<=k)
        {
            count1++;
            arr[i]+=k;
        }
       else if(arr[i]>k)
            break;
    }
    long count2=0;
     for (long i = n-1; i >=0; i--)
    {
        if(arr[i]<=k)
            count2++;
       else if(arr[i]>k)
            break;
    }
    int cnt= count1+count2;
    cout<<n-cnt;
    
    
    return 0;
}