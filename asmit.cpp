#include <bits/stdc++.h>

using namespace std;

int main()
{
     int i,n,a;
     int arr[n];
      cout<<"enter the size of array";
      cin>>n;
      
      for(i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      for(a=0;a<n;a++)
      {
          cout<<arr[a];
      }
      for(i=0;i<n;i++)
      {
          if(arr[i]%2==0)
          {
              cout<<"even"<<arr[i]<<"\n";
          }
          else{
              cout<<"odd"<<arr[i]<<"\n";
          }
      }
      
    return 0;
}