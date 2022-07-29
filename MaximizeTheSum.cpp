#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int k =240-m;
    int sum=0, tot=0, count=0;
    for (int i = 1; i <=n; i++)
    {
        sum= i*5;
        tot+=sum;
        if(tot<=k)
            count++;
    }
    cout<<count;
    return 0;
}