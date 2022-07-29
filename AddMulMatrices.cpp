#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n],b[m][n];
    int sum[m][n], mul[m][n],k;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    // Addition
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j]= a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl; 
    }
    // Multiplication
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mul[i][j]=0;
            for(k = 0; k < n; k++){
                mul[i][j]+=a[i][k]*b[k][j]; 
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl; 
    }
    return 0;
}