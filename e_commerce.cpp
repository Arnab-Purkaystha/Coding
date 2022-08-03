#include <bits/stdc++.h>

using namespace std;

int disc(int o)
{
   int sum=0;
   int temp;
   while(o!=0)
   {
    temp=o%10;
    if(temp==2|| temp==3||temp==5|| temp==7)
        {
            sum+=temp;
        }
    o=o/10;
   }
   return sum;
}

int main()
{
    int o;
    cin>>o;
    int res= disc(o);
    cout<<res;
    return 0;
}