#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ask(int n){
    cout << n << "\n";
    cout.flush();
    string s; cin >> s;
    return s == "yes";
}

void solve()
{
    vector<int>prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int cnt = 0;
    for(int i = 0; i < prime.size(); i++){
        bool ans = ask(prime[i]);
        if(ans){
            cnt++;
            if(cnt >= 2) break;
        }
        if(ans && prime[i] * prime[i] <= 100 && ask(prime[i] * prime[i])){
            cout << "composite" << "\n";
            return;
        }
    }
    if(cnt >= 2){
        cout << "composite" << "\n";
    }else{
        cout << "prime" << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
