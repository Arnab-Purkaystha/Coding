#include <bits/stdc++.h>
using namespace std;

int main()
{
  // write your code here
  int n;
  cin >> n;
  int arr[n], index[100000], diff[100000], boolean[100000];
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < 100000; i++)
  {
    index[i] = -1;
    diff[i] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    if (index[arr[i]] != -1)
    {
      diff[arr[i]] = i - index[arr[i]];
      index[arr[i]] = i;
    }
    else
    {
      index[arr[i]] = i;
      count++;
    }
  }

  cout << count << endl;
  for (int i = 0; i < n; i++)
  {
    if (index[i] != -1)
    {
      if (diff[i] == 0)
      {
        cout << i << " " << 0 << endl;
      }
      else
      {
        cout << i << " " << diff[i] << endl;
      }
    }
  }

  return 0;
}