#include <bits/stdc++.h>
using namespace std;
long long int totalnum(long long int num)
{
    long long int res = 0;
    if (num < 1)
    {
        return -1;
    }
    
    for (int i = 1; i <= num; i = i * 10)
    {
        res = res + (num - i + 1);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int num;
        cin >> num;
        cout << totalnum(num) << endl;
    }
    return 0;
}