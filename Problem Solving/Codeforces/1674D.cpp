#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>v(n), ans(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        ans[i] = v[i];
    }
    sort(ans.begin(), ans.end());
    bool check = true;

    for(int i = 0; i < n - 1; i++){
        if(n % 2 == 0){
            if(i % 2 == 0 && (ans[i] != v[i] || ans[i + 1] != v[i + 1])){
                if(ans[i] != v[i + 1] || ans[i + 1] != v[i]){
                    check = false;
                    break;
                }
            }
        }else{
            if(i % 2 == 1 && (ans[i] != v[i] || ans[i + 1] != v[ i + 1])){
                if(ans[i] != v[i + 1] || ans[i + 1] != v[i]){
                    check = false;
                    break;
                }
            }
        }
    }
    if(check){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
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
