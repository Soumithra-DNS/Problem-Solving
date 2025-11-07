#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    map<int,vector<int>> m;
    for(int i=0;i<n;i++){
        int a, b;
        cin >> a >> b;
        m[a].push_back(b);
    }
    for(int i=0;i<n;i++){
        if(m[i].empty()) continue;
        sort(m[i].begin(),m[i].end(),greater<int>());
    }
    long long ans=0;
    for(auto [M,v] : m){
        int ct=0;
        for(auto i : v){
            if(ct==M) break;
            ct++;
            ans+=i;
        }
    }
    cout<< ans <<endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/*
4
4
2 2 2
1 6
1 10
1 13 1
5
2 5 2 1
3 1
3 2 1
3 3 4 3
3 4 3 2
6
1 2
1 4 1
2 3 3
3 4 2
3 4 4
3 5 5

1
1 1

15
14
20
1

*/
