#include <bits/stdc++.h>
#include <string>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      char arr[n+1];
      for(int i=0; i<n; i++)
      {
        cin>>arr[i];
      }
      for(int i=0; i<n; i++)
      {
        cout<<arr[i]<<"\n";
      }
      int count=0;
      for(int i=0; i<n; i++)
      {
        if(arr[i]=='x')
        {
          count++;
          break;
        }
      }
      cout<<count<<"\n";
    }
    return 0;
  }