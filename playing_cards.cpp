#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      string tab;
      cin>>tab;
      string *hand  = new string[5];//its dynamic in nature yu can use static also
        for(int i=0;i<5;i++)
        {
            cin>>hand[i];
        }
      int flag=0;
  for(int i=0;i<5;i++)
  {
    if(tab[0]==hand[i][0]) 
    {   flag=1; 
        cout<<"YES"<<endl;
        break; 
    }
    if(tab[1]==hand[i][1])
    {  flag=1; 
        cout<<"YES"<<endl;
        break;
    }
  }
      if(flag==0)
        cout<<"No";
      
    }
    return 0;
  }