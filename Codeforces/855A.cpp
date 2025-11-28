#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair<int ,int>p1,pair<int ,int> p2){
    return p1.second<p2.second;
}

void solve()
{
    int t; cin >> t;
    map<string,bool> m;
    while(t--)
    {
        string s; cin >> s;
        if(m[s]!=1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        m[s]=1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

