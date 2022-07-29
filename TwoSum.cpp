#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[] = {3,2,4};
   int t= 6;
   int a1,a2;
   int n =sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==t)
                {
                    a1=i;
                    a2=j;
                }
            }
        }
    cout<<a1<<"\n"<<a2;
    return 0;
}