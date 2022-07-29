#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[20];
    int n;
    cin>>n;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int leftSum = 0;
    int rightSum = sum-a[0];
    if(leftSum==rightSum)
        {
            cout<<"true";
        }
    else{    
    for (int i = 0; i < n; i++)
    {
        
        leftSum+=a[i];
        rightSum-=a[i+2];
    }
    }   
    if (leftSum == rightSum)
    {
        cout<<"true";
    } 
    else{
        cout<<"false";
    }
    return 0;
}