#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    char arr[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }
    int mx = -1, a, b;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){

            if(arr[i][j] == '#'){
                int x = INT_MAX;
                int cnt = 0;
                for(int k = i; k > 0; k--){
                    if(arr[k][j] == '#'){
                        cnt++;
                    }else{
                        x = min(x, cnt);
                        break;
                    }
                }
                cnt = 0;
                for(int k = i; k <= n; k++){
                    if(arr[k][j] == '#'){
                        cnt++;
                    }else{
                        x = min(x, cnt);
                        break;
                    }
                }

                cnt = 0;
                for(int k = j; k > 0; k--){
                    if(arr[i][k] == '#'){
                        cnt++;
                    }else{
                        x = min(x, cnt);
                        break;
                    }
                }

                cnt = 0;
                for(int k = j; k <= m; k++){
                    if(arr[i][k] == '#'){
                        cnt++;
                    }else{
                        x = min(x, cnt);
                        break;
                    }
                }

                if(x > mx){
                    mx = x;
                    a = i;
                    b = j;
                }
            }
        }
    }
    cout << a << " " << b << "\n";
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
