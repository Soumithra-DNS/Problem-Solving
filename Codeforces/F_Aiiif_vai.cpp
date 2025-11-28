#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q; cin >> n >> q;
    deque<int>dq;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        dq.push_back(x);
    }
    vector<pair<int, int>>ans;
    unsigned long int z = 1e8;
    while(z--){
        int a = dq.front();
        dq.pop_front();
        int b = dq.front();
        dq.pop_front();
        if(a > b){
            dq.push_front(a);
            dq.push_back(b);
        }else{
            dq.push_front(b);
            dq.push_back(a);
        }
        ans.push_back({a, b});
    }
    while(q--){
        int m; cin >> m;
        auto p = ans[m - 1];
        cout << p.first << " " << p.second<<"\n";
        
        
    }

    return 0;
}
