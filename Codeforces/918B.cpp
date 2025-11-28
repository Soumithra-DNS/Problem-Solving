#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair<int ,int>p1,pair<int ,int> p2){
    return p1.second<p2.second;
}

void solve()
{
    int n, m; cin >> n >> m;
    map<string, string> ipName;
    while(n--)
    {
        string name, ip; cin >> name >> ip;
        ipName[ip]=name;
    }
    while (m--)
    {
        string name, ip; cin >> name >> ip;
        ip.pop_back();
        cout<< name << " " << ip << "; #" << ipName[ip] << endl;
    }
    
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

