#include <bits/stdc++.h>

using namespace std;
int Search(int arr[], int low, int high, int data)
{
    if(low>high)
     return -1;
     if (data >= arr[high])
        return high;
    int mid = low + (high-low)/2;
    if (arr[mid] == data)
        return mid;
    if (mid > 0 && arr[mid - 1] <= data && data < arr[mid])
        return mid - 1;
    if ( arr[mid]> data)
        return Search( arr, low, mid-1,data);
    else
        return Search( arr, mid+1, high,data);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int res = Search(arr,0,n-1,k);
        cout<<res<<endl;
    }
    return 0;
}