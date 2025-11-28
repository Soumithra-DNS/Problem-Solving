#include <bits/stdc++.h>
using namespace std;
#define int long long

template <typename T>
void show(const T &container)
{
    for (const auto &x : container)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), ans;
    multiset<int> st, store;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        auto it = st.begin();

        if (v[i] == *it)
        {
            int x = 0;
            if (!store.empty())
            {
                auto lb = store.lower_bound(1);
                if (lb != store.end() && *lb + 1 < v[i])
                {
                    x = 1;
                }
            }
            ans.push_back(v[i] + x);
        }
        else
        {
            store.insert(v[i]);
        }
        auto itt = st.find(v[i]);
        st.erase(itt);
    }

    for (auto it = store.begin(); it != store.end(); it++)
    {
        ans.push_back(*it + 1);
    }

    sort(ans.begin(), ans.end());
    show(ans);
}

int32_t main()
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