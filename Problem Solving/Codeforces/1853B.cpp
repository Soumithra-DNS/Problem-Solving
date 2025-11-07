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
    int n, k; cin >> n >> k;
    if(k > 30)
    {
        cout << 0 << endl;
        return;
    }
    int ans = 0;

    for(int i = 0; i <= n ; i++)
    {
        int first = i, second = n;
        bool ok = true;
        for(int j = 0; j < k - 2; j++)
        {
            int temp = second - first;
            second = first;
            first = temp;
            if(first > -1 && first <= second)
            {
                continue;
            }
            else 
            {
                ok = false;
                break;
            }

        }
        if(ok)
        {
            ans++;
        }

    }

    cout << ans << endl;
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
