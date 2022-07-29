#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m ,n;
    cin>>m>>n;
    int a[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i>=j)
            {
                cout<<a[i][j]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<"\n";  
    }
    cout<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<=j){
                cout<<a[i][j]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
         }
         cout<<"\n";
    }
    return 0;
}