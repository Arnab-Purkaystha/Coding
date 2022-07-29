#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;

    if(str1.length()!=str2.length())
        cout<<"Strings are not rotations of each other";
    else{
        string temp= str1+str1;
        if(temp.find(str2) != string::npos)
            cout<<" Strings are rotations of each other";
        else
            cout<<"Strings are not rotations of each other";
    }
    


    
    return 0;
}