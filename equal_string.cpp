#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string str[179];
      
      for(int i=0;i<n;i++)
        {
            cin>>str[i];
        }
        int ans=INT_MAX, flag=0;;
        for(int i=0;i<n;i++)
        {
          int count=0;
          for(int j=0;j<n;j++)
          {
            string temp= str[j]+str[j];
            int index= temp.find(str[i]);
            
            if(index== string::npos)
              {
                flag=1;
                break;
              }
            count+=index; 
          }
          ans = min(count, ans);
        }
        if(flag!=1)
        cout<<ans<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
  }