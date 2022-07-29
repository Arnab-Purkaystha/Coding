#include <bits/stdc++.h>

using namespace std;
int Search(int arr[], int low, int high,int diff)
{
    if(low>high)
        return -1;
    int mid = low + (high-low)/2;
    if(arr[mid+1]-arr[mid]!= diff)
        return arr[mid] + diff;
    if (mid > 0 && arr[mid] - arr[mid - 1] != diff)
        return (arr[mid - 1] + diff);
    if(arr[mid]== arr[0] + (mid*diff))
        return Search(arr, mid+1,high,diff);
    else
        return Search(arr, low,mid-1,diff);

}
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
        int d= (arr[n-1] - arr[0])/n;
        int res=Search(arr,0,n-1,d);
        if(res!=-1)
            cout<<res<<endl;
        
    }
    return 0;
}