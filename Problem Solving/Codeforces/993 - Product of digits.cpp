#include <bits/stdc++.h>
using namespace std;

const int N = sqrt(1e9);
vector<bool> status(N, true);
vector<int> prime;
void siv()
{
    status[1] = false;
    for (int i = 2; i < sqrt(N); i++)
    {
        if (status[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                status[j] = false;
            }
        }
    }

    for (int i = 1; i < N; i++)
    {
        if (status[i])
        {
            prime.push_back(i);
        }
    }
}

void solve()
{
    long long int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    int mul = 1, x = n;
    vector<int> ans;
    // for (int i = 0; i < 4;)
    // {
    //     if (x == 1)
    //     {
    //         break;
    //     }
    //     if (x % prime[i] == 0)
    //     {
    //         x = x / prime[i];
    //         mul *= prime[i];
    //         ans.push_back(prime[i]);
    //         // cout << prime[i]<<"\n";
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }

    for (int d = 9; d >= 2; --d) {
        while (x % d == 0) {
            ans.push_back(d);
            x /= d;
            mul *= d;
        }
    }
    sort(ans.begin(), ans.end());
    // cout << mul << "\n";
    if (mul == n)
    {
        for (auto ele : ans)
        {
            cout << ele;
        }
        cout << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    siv();
    while (t--)
    {
        solve();
    }
    return 0;
}
