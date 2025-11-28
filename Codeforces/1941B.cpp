#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n - 2; i++){
        if(v[i] < 0){
            cout << "NO" << endl;
            return;
        }
        if(v[i] != 0){
            v[i + 1] = v[i + 1] - ( v[i] * 2);
            v[i + 2] = v[i + 2] - v[i];
            v[i] = 0;
        }
    }

    if(v[n - 2] == 0 && v[n - 1] == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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
