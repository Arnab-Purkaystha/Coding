#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q; 
  cin>>q;
  while(q--){
    int a, b, c ;
    cin>>a>>b>>c ;

    if(min(a, b) <= c){
      cout<<min(a, b)<<"\n";
    }
    else{
      int sum = (a + b + c)/3;
      cout<<min(sum, min(a, b)) <<endl;
    }
  }
  return 0;
}