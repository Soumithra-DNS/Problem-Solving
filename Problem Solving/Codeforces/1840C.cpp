#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long n, k, q; cin >> n >> k >> q;
   long long mx=0,ans=0,temp, x;
   while(n--){
    cin >> x;
    if(x<=q) mx++;
    else if(mx>=k){
        temp=mx-k+1;
        ans+=(temp*(temp+1))/2;
        mx=0;
    }
    else mx=0;
   }
    if(mx>=k){
        temp=mx-k+1;
        ans+=(temp*(temp+1))/2;
    }

    cout << ans << endl;

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}

