#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, sum = 0;
    cin >> n >> k;
    vector<long long> ship(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> ship[i];
        sum += ship[i];
    }

    if(sum <= k){
        cout << n << "\n";
        return;
    }

    int l = 0, r = n - 1, dur;
    while (l < r && k)
    {
        dur = min(ship[l], ship[r]);

        if (dur * 2 <= k)
        {
            ship[l] -= dur;
            ship[r] -= dur;
            k -= dur * 2;
        }
        else
        {
            if(ship[l] * 2 - 1 == k){
                ship[l] = 0;
            }
            k = 0;
        }
        if (!ship[l])
        {
            l++;
        }
        if (!ship[r])
        {
            r--;
        }
    }
    
    if (l > r)
    {
        cout << n << "\n";
        return;
    }
    
    cout << n - (r - l + 1) << "\n";
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
