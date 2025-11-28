#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n; cin >> n;
  int a[2][n];
  int l=1,r=n*2;
  a[0][0]=r--;
  a[1][n-1]=r--;
  for(int i=1;i<n;i++)
  {
      if(i%2)
      {
          a[0][i]=l,l++;
          a[1][i-1]=l,l++;
      }
      else
      {
          a[1][i-1]=r,r--;
          a[0][i]=r,r--;
      }
  }
  for(int j=0;j<2;j++)
  {
    for(int i=0;i<n;i++)
    {
        cout<<a[j][i]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}


