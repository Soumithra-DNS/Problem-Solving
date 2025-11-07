#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e7 + 1;
vector<char> status(N, 1);
vector<ll> prime;
vector<long long> ans;

void siv()
{
    for (ll i = 2; i < N; i++)
    {
        if (status[i] == 1)
        {
            prime.push_back(i);
            for (ll j = i * i; j < N; j += i)
            {
                status[j] = 0;
            }
        }
    }
    ll n = prime.size();

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n && prime[i] * prime[j] <= N; j++)
        {
            ans.push_back(prime[i] * prime[j]);
        }
    }

    sort(ans.begin(), ans.end());
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    siv();
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << ans[k - 1] << "\n";
    }
    return 0;
}
