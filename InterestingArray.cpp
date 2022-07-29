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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        int low=0, high= n-1,count=0;;
        while(low<high)
        {
          if(arr[low]+arr[high]==k)
          {
            cout<<low<<" "<<high;
            count++;
            break;
          }
          if((arr[low]+arr[high])<k)
          {
            low++;
          }
          else{
            high--;
          }
        }
        if(count==0)
           cout<<"no answer"<<endl;
        cout<<endl;
    }
    return 0;
}