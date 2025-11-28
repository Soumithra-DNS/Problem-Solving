#include<bits/stdc++.h>
using namespace std;
#define    yes              cout << "YES" << endl;
#define    no               cout << "NO" << endl;
#define    ll               long long 
#define    pb               push_back
#define    ppb              pop_back
#define    mp               make_pair
#define    ff               first
#define    ss               second
#define    f(i, s, n)       for(int i = s; i < n; i++)


void solve()
{
    string s; cin >> s;
    map<char,stack<int>> m;
    int diff = INT_MAX;

    for(int i = 0; i< s.size(); i++)
    {
        m[s[i]].push(i);
        if(!m['1'].empty() && !m['2'].empty() && !m['3'].empty())
        {
            int mx = max( max( m['1'].top(), m['2'].top()), m['3'].top());
            int mn = min( min( m['1'].top(), m['2'].top()), m['3'].top());

            diff = min( diff, mx - mn);
        }
    }
    if(diff == INT_MAX)
        cout << 0 << endl;
    else
        cout << ++diff << endl;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}