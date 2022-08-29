#include <iostream>
using namespace std;

int ans(int arr[], int n, int res)
{
     for(int i =0; i<n; i++){
        for(int j= i+1; j<n;j++)
        {
            if(arr[i] + arr[j] >= arr[i]*arr[j])
             res++;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int res=0; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    cout<<ans(arr,n,res);
}