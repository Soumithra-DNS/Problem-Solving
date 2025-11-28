#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int x;
    map<int, int>mp;
    for(int i = 0; i < n; i++){
        cin >> x;
        mp[x]++;
    }
    int m; cin >> m;
    while(m--){
        int ind; cin >> ind;
        cout << mp[ind] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    
    return 0;
}
