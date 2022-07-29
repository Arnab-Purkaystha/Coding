#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll N, X, K; cin>>N>>X>>K;
  ll height[N], rate[N];
  for(ll i=0; i<N; i++)
    cin>>height[i];

  for(ll i=0; i<N; i++)
    cin>>rate[i];
  ll low = 0;
  ll high = 1000000000000000000;
  ll min_days = 0;
  while(low <= high){
    ll mid = (low + high)/2;
    ll sum = 0, flag = 0;
    for(ll i=0 ;i<N; i++){
      if(K <= (mid*rate[i] + height[i])){
        sum += (mid*rate[i] + height[i]);
        if(sum >= X){
          flag = 1;
          break;
        }
      }
    }

    if(flag == 1){
      min_days = mid;
      high = mid - 1;
    }
    else
      low = mid + 1;
  }
  cout<<min_days;

  return 0;
}