#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t; 
  cin>>t;
  while(t--){
    int n; 
    cin>>n;
    int arr[n];
    int max_ele = -1, count = 0;
    for(int i=0; i<n; i++){
      cin>>arr[i];
      if(arr[i] > max_ele){
        max_ele = arr[i];
        count++;
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}