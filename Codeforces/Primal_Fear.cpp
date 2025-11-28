#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;

vector<bool> status(N);
vector<int> ans(N);

void print()
{
    for (int i = 0; i < 200; i++)
    {
        if (!status[i])
        {
            cout << i << "\n";
        }
    }
}

void siv()
{
    int n = sqrt(N);
    status[1] = 1;

    for (int i = 4; i <= N; i += 2)
    {
        status[i] = 1;
    }

    for (int i = 3; i < n; i += 2)
    {
        if (!status[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                status[j] = 1;
            }
        }
    }
}

bool check(int N)
{
    string s = to_string(N);
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            // cout << s << "\n";
            return false;
        }
    }
    int i = 0;

    while (i < n)
    {
        string s1 = s.substr(i, n - i);
        int x = stoi(s1);
        if (status[x])
        {
            return false;
        }
        i++;
    }

    return true;
}

void cal()
{
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (!status[i] && check(i))
        {
            cnt++;
            ans[i] = cnt;
        }
        else
        {
            ans[i] = cnt;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << ans[n] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    siv();
    cal();
    // print();
    while (t--)
    {
        solve();
    }
    return 0;
}
