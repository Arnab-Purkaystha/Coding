#include <bits/stdc++.h>

using namespace std;

void Pattern(int n)
{
    cout<<n<<" ";
    if(n<=0)
    {
        return;
    }
    Pattern(n-5);
    cout<<n<<" ";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Pattern(n);
        cout<<"\n";
    }
    return 0;
}