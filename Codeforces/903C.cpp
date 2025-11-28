#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair<int ,int>p1,pair<int ,int> p2){
    return p1.second<p2.second;
}

void solve()
{
    int n; cin >> n;
    map<long long, long long>m;
    long long maX=0;
    for(int i=0; i< n; i++)
    {
        int x; cin >> x;
        m[x]++;
        maX = max(maX, m[x]);
    }
    cout << maX << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

