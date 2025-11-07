#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>v(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(i == v[v[i]]){
            cnt++;
        }
    }
    if(cnt >= 2){
        cout << 2 << "\n";
    }else{
        cout << 3 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
