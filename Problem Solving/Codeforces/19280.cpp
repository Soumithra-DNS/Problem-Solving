#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)

void solve()
{
    int m, n; cin >> m >> n;
    if(m > n){
        swap(m, n);
    }
    if(m % 2 == 1 & n % 2 == 1){
        cout << "No" << "\n";
        return;
    }else if(m % 2 & n % 2 == 0){
        if(n / 2 == m){
            cout << "No" << "\n";
            return;
        }
    }
    cout << "Yes" << "\n";
    
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
