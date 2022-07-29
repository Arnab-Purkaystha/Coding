#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      long arr[n];
      for (int i = 0; i < n; i++)
       { 
         cin>>arr[i];
         arr[i]= arr[i]*arr[i];
       }
      sort(arr,arr+n);
      for (int i = 0; i < n; i++)
       { 
         cout<<arr[i]<<" ";
       }
      int count=0;
      for (int i = n-1; i >= 2; i--)
      {
          int j=0;
          int k= i-1;
          while(j<k)
          {
            if(arr[i]==arr[j]+arr[k])
            {
                cout<<"YES"<<endl;
                count++;
                break;
            }
             else if(arr[i]>arr[j]+arr[k])
                    j++;
                else if(arr[i]<arr[j]+arr[k])
                    k--;
          }
      }
        if(count==0)
            cout<<"NO"<<endl;
      
    }
    return 0;
  }