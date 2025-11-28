#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n; cin >> n;
   vector <int> a(2*n);
   for(int i=0;i<2*n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    int ct=1,mx=0;
    for(int i=1;i<2*n;i++){
        if(a[i]==a[i-1]) ct++;
        else{
            if(ct>mx) mx=ct;
            ct=1;
        }
    }
    if(ct>mx) mx=ct;
    cout << mx << endl;

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}

