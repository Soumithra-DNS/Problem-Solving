#include <bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9 + 7;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int range[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> range[i][0] >> range[i][1];
    }
    
    for (int i = 0; i < n; i++)
    {
        int d = range[i][0];
        for (int j=0; j < n; j++)
        {
            if (range[i][0]==range[j][0] && range[i][1]>range[j][1])
            {
                d = max(d, range[j][1] + 1);
            }
        }
        cout << range[i][0] << " " << range[i][1] << " " << d << endl;
    }
    cout<<endl;
}

int_fast32_t main()
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