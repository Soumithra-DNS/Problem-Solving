#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    map<int, int> mp1, mp2;
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        int src;
        cin >> src;
        sum1 += src;
        mp1[src]++;
    }
    for (int i = 0; i < m; i++)
    {
        int src;
        cin >> src;
        sum2 += src;
        mp2[src]++;
    }
    int i = 0;
    int z = 1;
    if (k % 2 == 0)
    {
        z++;
    }
    while (i < z && i < k)
    {
        i++;
        if (i % 2 == 1)
        {
            auto it1 = mp1.begin();
            auto it2 = --mp2.end();
            if (it1->first < it2->first)
            {
                sum1 -= it1->first;
                sum1 += it2->first;
                mp1[it2->first]++;
                mp2[it1->first]++;
                if (it1->second == 1)
                {
                    mp1.erase(it1);
                }
                else
                {
                    mp1[it1->first]--;
                }

                if (it2->second == 1)
                {
                    mp2.erase(it2);
                }
                else
                {
                    mp2[it2->first]--;
                }
            }
        }
        else
        {
            auto it1 = --mp1.end();
            auto it2 = mp2.begin();
            if (it1->first > it2->first)
            {
                sum1 -= it1->first;
                sum1 += it2->first;
                mp1[it2->first]++;
                mp2[it1->first]++;
                if (it1->second == 1)
                {
                    mp1.erase(it1);
                }
                else
                {
                    mp1[it1->first]--;
                }

                if (it2->second == 1)
                {
                    mp2.erase(it2);
                }
                else
                {
                    mp2[it2->first]--;
                }
            }
        }
    }

    cout << sum1 << "\n";
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
