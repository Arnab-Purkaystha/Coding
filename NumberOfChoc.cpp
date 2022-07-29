#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    int q=0;
    cin>>q;
    int x, count=0;
    for(int i=0; i<n; i++)
    {
      if(q>i)
      {
        cin>>x;
      }
      if(i>q)
        break;
      if(arr[i]<=x)
      {
          x-=arr[i];
          count++;
      }
      cout<<count<<endl;
      count=0;
    }
    return 0;
  }