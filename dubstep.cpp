#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
   int n= s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            cout<<" ";
        }
        else
        {
            cout<<s[i];
        }
        //  if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        
    }
    
    return 0;
}