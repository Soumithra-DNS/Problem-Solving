#include<bits/stdc++.h>
using namespace std;
#define    yes              cout << "YES" << endl;
#define    no               cout << "NO" << endl;
#define    ll               long long 
#define    pb               push_back
#define    ppb              pop_back
#define    mp               make_pair
#define    ff               first
#define    ss               second
#define    f(i, s, n)       for(int i = s; i < n; i++)


void solve()
{
    map<int, int> m;
    int n; cin >> n;
    int x, mx = 0;
    f(i, 0, n)
    {
        cin >> x;
        m[x]++;
        mx = max(mx, m[x]);
    }
    int Size1 = m.size();
    int Size2 = m.size();
    int mx1 = mx, mx2 = mx;

    int ans =max(min(mx1, --Size1), min(--mx2, Size2));

    cout << ans << endl;



}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}