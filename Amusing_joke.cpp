#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string guest;
    string host;
    string door;
    cin>>guest;
    cin>>host;
    cin>>door;
    string total;
    total = host + guest;
    sort (door.begin() , door.end() );
    sort (total.begin() , total.end() );
    if(total.size() == door.size())
    {
        if(total==door)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}