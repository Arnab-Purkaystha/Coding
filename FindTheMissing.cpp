#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        int s=n-1;
        int arr[s];
        int sum=0;
        int tot=0;
        for (int i = 0; i <= n; i++)
        {
            if(i<s)
            {
                cin>>arr[i];
                sum+=arr[i];
            }
            tot+=i;
        }
        cout<<tot-sum<<"\n";
    }
    return 0;
}