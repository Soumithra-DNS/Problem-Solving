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
    string a, b, c;
    cin >> a >> b >> c;
    for(int i = 0; i < a.size(); i++){
        if(a[i]==b[i]){
            if(a[i] == c[i]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout <<"YES"<<endl;
    return;
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
