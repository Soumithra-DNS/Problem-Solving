#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    int val = v[0], cnt = 1;

    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        if (val == v[i])
            cnt++;
    }
    if (cnt == n)
    {
        cout << -1 << "\n";
        return;
    }
    int mn = INT_MAX, cnt_l, cnt_r;
    for(int i = 1; i < n - 1; i++){
        if(v[i - 1] == v[i + 1] && v[i] != v[i + 1]){
            cnt_l = 0, cnt_r = 0;
            int j = i - 1;
            while(j >= 0 && v[j] == v[i - 1]){
                j--;
                cnt_l++;
            }
            int k = i + 1;
            while(k < n && v[k] == v[i + 1]){
                k++;
                cnt_r++;
            }
            mn = min(mn, min(cnt_l , cnt_r));
        }
    }
    cout << mn << "\n";
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
