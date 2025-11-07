#include<bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9+7;
using namespace std;

ll inversionCounter(vector<int>V, int n){
  ll zero = 0, one = 0, inversions = 0;
  for(int i = 0; i<n; i++){
    if(V[i]==1) one++;
    else inversions += one;
  }
  return inversions;
}

void solve()
{
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i<n; i++) cin >> v[i];
  ll ans = inversionCounter(v, n);

  int index=-1;
  for(int i=0; i<n; i++){
    if(v[i]==0){
      v[i]=1;
      index=i;
      break;
    }
  }
  ans = max(ans,inversionCounter(v,n));
  if(index!=-1){
    v[index]=0;
  }
  for(int i=n-1; i>-1; i--){
    if(v[i]==1){
      v[i]=0;
      break;
    }
  }
  ans = max(ans,inversionCounter(v,n));
 
  cout << ans << endl;
}

int_fast32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}