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
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == arr[i - 1] && i > 1)
        {
            v[i] = v[i - 1];
            continue;
        }

        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] != arr[j])
            {
                v[i] = j;
                break;
            }
        }
    }

    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        if(v[l] > r || v[l] == 0){
            cout << -1 << " " << -1 << "\n";
        }else{
            cout << l << " " << v[l] << "\n";
        }
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
