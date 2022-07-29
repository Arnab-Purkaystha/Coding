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
        int arr[n],res[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            res[i]=0;
        }
        int low= 0, high= n-1;
        int x= true;
        for (int i = 0; i < n; i++)
        {
            if(x)
            {
                res[i]=arr[high];
                high--;
            }
            else{
                res[i]=arr[low];
                low++;
            }
            x=!x;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}