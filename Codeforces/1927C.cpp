#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)

void solve()
{
    int n, m, k; cin >> n >> m >> k;
    int a[n], b[m];
    unordered_set<int>s;
    int c[k + 1]={},d[k + 1]={};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= k){
            c[a[i]]++;
        }
    }
     bool check = true;
    for(int i = 0; i < m; i++){
        cin >> b[i];
        if(b[i] <= k){
            d[b[i]]++;
        }
    }
    int cnt1 = 0, cnt2 = 0;
    for(int i = 1; i <=k; i++){
        if(c[i] != 0){
            cnt1++;
        }else{
            if(d[i] == 0){
                check = false;
            }
        }
        if(d[i] != 0){
            cnt2++;
        }
    }
    if(cnt1 >= k / 2 && cnt2 >= k / 2 && check){
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
