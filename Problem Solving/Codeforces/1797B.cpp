#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll k;
    int n; cin >> n >> k;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x; cin >> x;
            v[i].push_back(x);
        }
    }
    ll cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] != v[n-1-i][n-1-j]) cnt++;
        }
    }
    cnt/=2;

    if (k >= cnt){
        if((k- cnt)%2 == 1 && n%2 == 0){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;

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
