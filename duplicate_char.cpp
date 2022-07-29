#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int i = 0, alphabet[26] = {0}, j;
        while (str[i] != '\0')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                j = str[i] - 'a';
                ++alphabet[j];
            }
            ++i;
        }
        int count=0;
        for (i = 0; i < 26; i++)
            {
                if (alphabet[i] > 1){
                    cout << char(i + 'a') << " : " << alphabet[i] << endl;
                    count++;
                }
            }
            if(count==0)
                cout<<"-1"<<endl;
    }
    return 0;
}