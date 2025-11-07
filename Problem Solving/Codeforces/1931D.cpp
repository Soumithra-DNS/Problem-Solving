#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin() , v.end());
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1;j < n; j++){
            if((v[i] + v[j]) % x == 0){
                if((v[i] - v[j]) % y == 0){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
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
