#include <bits/stdc++.h>

using namespace std;

int main()
    {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int sum=0;
        for (int i = 1; i < x; i++)
        {
           if(x%i==0)
           {
               sum=sum+i;
           }
        }
        if(sum==x)
        {
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    return 0;
}