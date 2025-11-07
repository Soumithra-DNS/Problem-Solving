#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, t;
    cin >> n >> t;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.push_back({y, x});
    }

    sort(v.begin(), v.end());

    long long total = 0;

    for(auto a : v){
        
    }

    for(auto a : v){
        cout << a.second << " " << a.first<<endl;
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
