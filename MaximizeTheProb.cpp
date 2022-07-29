#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,ans=0;
    int cnt=0;
    cin>>n>>k;
    k=240-k;
    for(int i=1;i<n;i++){
        if(ans<=k)
        {
            ans=i*5;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}