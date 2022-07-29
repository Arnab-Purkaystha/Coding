#include <bits/stdc++.h>

using namespace std;

int Sum(int num)
{
    if(num==0)
        return 0;
    return (num % 10 + Sum(num / 10));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int res=Sum(n);
        cout<<res;
        cout<<"\n";
    }
    return 0;
}