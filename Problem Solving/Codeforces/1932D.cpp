#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    char trum; cin >> trum;
    map<char, vector<string>>mp;
    for(int i  = 0; i < n * 2; i++){
        string s; cin >> s;
        mp[s[1]].push_back(s);
    }
    vector<pair<string, string>> ans;
    vector<string>trump, trm;
    for(auto it : mp){
        sort(it.second.begin(), it.second.end());
        int m = it.second.size();
        if(it.first == trum){
            for(int i = 0; i < m; i++){
                trm.push_back(it.second[i]);
            }
            continue;
        }
        for(int i = 0; i < m - 1; i += 2){
            ans.push_back({it.second[i], it.second[i + 1]});
        }
        if(m % 2){
            trump.push_back(it.second[m - 1]);
        }
    }

    int t = mp[trum].size();
    int t1 = trump.size();
    if(t < t1){
        cout << "IMPOSSIBLE" <<"\n";
        return;
    }else if( (t - t1) % 2){
        cout << "IMPOSSIBLE" <<"\n";
        return;
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << "\n";
    }
    for(int i = 0; i < t1; i++){
        cout << trump[i] << " " << trm[i] << "\n";
    }
    for(int i = t1; i < t; i += 2){
        cout << trm[i] << " " << trm[i + 1] << "\n";
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


// for(int i = 0; i < n * 2; i++){
//         string s; cin >> s;
//         v[s[1] - 'A'].push_back(s[0]);
//     }
//     int t = 0;
//     for(int i  = 2; i < 27; i++){
//         if(i != trump - 'A')
//         t += (v[i].size() % 2);
//     }
//     if(v[trump - 'A'].size() >= t){
        
//     }
//     cout << t <<"\n";
