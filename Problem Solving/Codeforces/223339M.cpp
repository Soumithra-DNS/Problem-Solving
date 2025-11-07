#include <bits/stdc++.h>
using namespace std;
long long cal(int i, int n, int m, vector<int>&v, long long sum){
    if(i > m){
        return sum;
    }
    sum += v[n - i];
    return cal(i + 1, n, m, v, sum);
}
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << cal(1, n, m, v, 0) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    
        solve();

    return 0;
}
