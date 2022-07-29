#include <bits/stdc++.h>

using namespace std;
void Merge(int arr[], int left, int mid, int right)
{
    int n1= mid-left+1;
    int n2= right-mid;
    int leftarr[n1];
    int rightarr[n2];
    int i=0,j=0,k=0;
    for (int i = 0; i < n1; i++)
    {
        leftarr[i]= arr[left+i];
    }
    for (int j = 0; j< n2; j++)
    {
        rightarr[j]= arr[mid+1+j];
    }
    k=left;
    while(i<n1 && j< n2)
    {
        if(leftarr[i]<=rightarr[j])
            arr[k++]=leftarr[i++];
        else
             arr[k++]=rightarr[j++];
    }
    while(i<n1)
         arr[k++]=leftarr[i++];
    while (j<n2)
    {
        arr[k++]=rightarr[j++];
    }
}

void MergeSort( int arr[], int left , int right)
{
    if(left>=right)
        return;
    int mid = left + (right-left)/2;
    MergeSort( arr, left, mid);
    MergeSort(arr, mid+1, right);
    Merge(arr, left, mid,right);
}
int main()
{
    int arr[5] = { 5,4,3,2,1};
     MergeSort(arr,0,4);
     for (int i = 0; i < 5; i++)
     {
         cout<<arr[i]<<" ";
     }
     
    return 0;
}