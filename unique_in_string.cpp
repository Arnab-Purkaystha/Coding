#include <bits/stdc++.h>

using namespace std;

int disc(string  compString)
{
    int freq[256] = {0};
    int count=0;
    for(int i = 0; compString[i] != '\0'; i++)
    {
        freq[compString[i]]++;
    }
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] == 1){
            count++;
        }
    }
    return count;
}

int main()
{
    string compString;
    cin>>compString;
    int res= disc(compString);
    cout<<res;
    return 0;
}