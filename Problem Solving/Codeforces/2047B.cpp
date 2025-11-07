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
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    vector<pair<char, int>> v;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            v.push_back({(char)(i + 'a'), freq[i]});
        }
    }

    sort(v.begin(), v.end(), [](pair<char, int> &a, pair<char, int> &b)
        { return a.second > b.second || (a.second == b.second && a.first < b.first); });


    int m = v.size();
    char x = v[0].first;        
    char y = v[m - 1].first; 
    //cout << x << " " << y << "\n";

    for(int i = 0; i < n; i++){
        if(s[i] == y){
            s[i] = x;
            break;
        }
    }
    cout << s << "\n";
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
