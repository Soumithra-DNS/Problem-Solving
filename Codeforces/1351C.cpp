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
    map<pair<int, int>,int> m;
    int c1 = 0, c2 = 0, ans = 0;
    m[{c1,c2}]++;

    f(i, 0, s.size())
    {
        int x = c1, y = c2;
        if(s[i]=='S') c1++;
        else if(s[i]=='N') c1--;
        else if(s[i]=='E') c2++;
        else c2--;
        if(m[{c1 + x, c2 + y}]++ == 0 )
            ans+=5;
        else
            ans++;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}