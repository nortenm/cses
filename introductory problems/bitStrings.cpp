#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#defone lp(i,n) for(int i=0;i<(int)n;i++)
int main()
{
  int m = 1e9 + 7;
  int n;
  cin>>n;
  int ans = 1;
  while(n--)
    {
      ans = (ans * 2) % m;
    }
  cout<<ans;
}
