#include <bits/stdc++.h>

using namespace std;
int Search(int arr[], int low, int high)
{   
    while(low<high)
    {
        int mid= low +(high-low)/2;
    if(arr[mid]==1 && (arr[mid-1]==0 || mid==0))
        return mid;
    else if(arr[mid]==0)
        return Search(arr, mid+1,high);
    else
        return Search(arr,low,mid-1);
    }
    return -1;
}
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
        int res= Search(arr,0,n-1);
        cout<< res << endl;   
    }
    return 0;
}