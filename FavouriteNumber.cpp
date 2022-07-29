#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int a,rem,count=0;
      cin>>a;
      while(a!=0)
      {
          rem=a%10;
          if(rem==5)
          {
              count++;
          }
          a=a/10;
      }
      cout<<count<<endl;
    }
    return 0;
  }