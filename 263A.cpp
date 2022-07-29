#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int n;
    for(int i = 0 ; i < 5 ; i ++ )
    {
        for(int j = 0 ; j < 5 ; j ++ )
        {
            cin >> a[i][j];
            {
                if( a[i][j] == 1 )
                {
                    n = abs(2-i) + abs(2-j);
                }
            }
        }
    }
    cout << n;
}