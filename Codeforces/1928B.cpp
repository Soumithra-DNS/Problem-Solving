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
    int n; cin >> n;
    vector<int>v;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(!m[x]){
            v.push_back(x);
            m[x]++;
        }
    }
    sort(v.begin(), v.end());
    int i = 0, j = 0, cnt = 0, mx = 0;
    while(i <= j && i < v.size() && j < v.size()){
        if(v[j] - v[i] < n){
            cnt++;
            j++;
        }else{
            mx=max(mx, cnt);
            if(v[i + 1] - v[i] < n){
                cnt--;
            }
            i++;
            if(i == j){
                cnt = 0;
            }
        }

    }
    mx=max(mx, cnt);

    cout << mx << "\n";
    
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
