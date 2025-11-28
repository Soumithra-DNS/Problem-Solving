#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    //s.insert(n - 1 - 1, "01");
    
    if(n & 1){
        cout << "-1" << "\n";
        return;
    }

    int l = 0, cnt = 0;
    vector<int>ans;
    while(l < n - l - 1 && cnt < 300){
        if(s[l] == s[n - l - 1]){
            if(s[l] == '0'){
                ans.push_back(n - l);
                s.insert(n - l, "01");
            }else{
                ans.push_back(l);
                s.insert(l, "01");
            }
            n += 2;
            cnt++;
        }else{
            l++;
        }
    }
    if(cnt <= 300 && l == (n) / 2){
        cout << ans.size()<<"\n";
        for(auto i : ans){
            cout << i << " ";
        }
        cout << "\n";
    }else{
        cout << -1 << "\n";
    }
    
}

int main()
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
