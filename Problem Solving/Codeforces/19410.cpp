#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k; cin >> n >> m >> k;
    int b[n], c[m];
    for(int i  = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < m; i++){
        cin >> c[i];
    }
    sort(b, b + n);
    sort(c, c + m);
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(b[i] + c[j] <= k){
                cnt++;
            }else{
                break;
            }
        }
    }

    cout << cnt << endl;
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
