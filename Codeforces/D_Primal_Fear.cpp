#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 1;
vector<bool> status(N, true);
vector<int> ans(N, 0);
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
}

bool valid(int n)
{
    string s = to_string(n);
    int z = s.size();
    for (int i = 1; i < s.size(); i++)
    {
        z--;
        string str = s.substr(i, z);
        int num = stoi(str);
        if (!status[num])
        {
            return false;
        }
    }
    return true;
}

bool zero(int n)
{
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            return false;
        }
    }
    return true;
}

void cal()
{
    int cnt = 0;
    for (int i = 1; i < N; i++)
    {
        if (status[i] && zero(i) && valid(i))
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
    siv();
    cal();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
