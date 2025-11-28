#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m , k; cin >> n >> m >> k;
    // int a[n], b[m];
    map < int, int > mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int total = 0;
    for(int i  = 0; i < m; i++){
        int y;
        cin >> y;
        for(int j = y - k; j <= y + k; j++){
            total += mp[j];
            mp[j] = 0;
        }
    }
    cout << total << endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    
    return 0;
}
