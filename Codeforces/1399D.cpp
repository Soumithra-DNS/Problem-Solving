#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> zero, one;
    vector<int> ans(n + 1);
    for (int i = 0; i < n; i++)
    {
        int newSubSequence = zero.size() + one.size();
        if (s[i] == '0')
        {
            if (one.empty())
            {
                zero.push(newSubSequence);
            }
            else
            {
                newSubSequence = one.top();
                one.pop();
                zero.push(newSubSequence);
            }
        }
        else
        {
            if (zero.empty())
            {
                one.push(newSubSequence);
            }
            else
            {
                newSubSequence = zero.top();
                zero.pop();
                one.push(newSubSequence);
            }
        }
        ans[i] = newSubSequence;
    }
    cout << zero.size() + one.size() << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] + 1 << " ";
    }
    cout << "\n";
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
