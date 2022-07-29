#include <bits/stdc++.h>

using namespace std;
int Search(int arr[], int low, int high, int k)
{
    if(low>high)
        return -1;
    int mid= low + (high-low)/2;
    if(arr[mid]==k)
        return mid;
    if(arr[low]<=arr[mid])
    {
        if(k>= arr[low] && k< arr[mid])
            return Search(arr,low,mid-1,k);
        return Search(arr,mid+1, high,k);
    }
     if(k<= arr[high] && k>arr[mid])
        return Search(arr,mid+1, high,k);    
     return Search(arr,low,mid-1,k);        
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int res= Search(arr,0,n-1,k);
    if (res != -1)
        cout << "Index: " << res << endl;
    else
        cout << "Key not found";
    return 0;
}