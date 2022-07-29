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
        int c=1,p=0,ans=0;
        while(c<n)
        {
           if(n%c==0)
            {
                p=c;
                c=c+p;
                ans+=2;
            }
        else{
            c+=p;
            ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}