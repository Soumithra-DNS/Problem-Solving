#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v1, v2;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.size() % 2)
        {
            v1.push_back(s);
        }
        else
        {
            v2.push_back(s);
        }
    }
    long long cnt = 0;

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i; j < v1.size(); j++)
        {

            string s = v1[i] + v1[j];
            int size = s.size();
            int lsum = 0, rsum = 0;
            for (int i = 0; i < size / 2; i++)
            {
                lsum += (s[i] - '0');
            }
            for (int i = size / 2; i < size; i++)
            {
                rsum += (s[i] - '0');
            }
            if (lsum == rsum)
            {
                cnt++;
            }
            if (i == j)
            {
                continue;
            }
            s = v1[j] + v1[i];
            lsum = 0, rsum = 0;
            for (int i = 0; i < size / 2; i++)
            {
                lsum += (s[i] - '0');
            }
            for (int i = size / 2; i < size; i++)
            {
                rsum += (s[i] - '0');
            }
            if (lsum == rsum)
            {
                cnt++;
            }
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = i; j < v2.size(); j++)
        {

            string s = v2[i] + v2[j];
            int size = s.size();
            int lsum = 0, rsum = 0;
            for (int i = 0; i < size / 2; i++)
            {
                lsum += (s[i] - '0');
            }
            for (int i = size / 2; i < size; i++)
            {
                rsum += (s[i] - '0');
            }
            if (lsum == rsum)
            {
                cnt++;
            }
            if (i == j)
            {
                continue;
            }
            s = v2[j] + v2[i];
            lsum = 0, rsum = 0;
            for (int i = 0; i < size / 2; i++)
            {
                lsum += (s[i] - '0');
            }
            for (int i = size / 2; i < size; i++)
            {
                rsum += (s[i] - '0');
            }
            if (lsum == rsum)
            {
                cnt++;
            }
        }
    }

    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
