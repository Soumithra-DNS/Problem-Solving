#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>v(n);
    int mn = INT_MAX, k;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] < mn){
            mn = v[i];
            k = i;
        }
    } 

    bool check = true;
    
    for(int i = k + 1; i < n - 1; i++){
        if(v[i] > v[i + 1]){
            check = false;
            break;
        }
    }

    if(check){
        cout << k << "\n";
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
