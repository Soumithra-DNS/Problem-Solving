#include<bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9+7;
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>v(n+1), vec(n+1);
    int l=-1, r=-1;
    for(int i=1;i<n+1;i++) cin >> v[i];
    for(int i=1;i<n+1;i++){
        cin >> vec[i];
        if (v[i]!=vec[i] && l==-1) l=i;
    }

    for(int i=n;i>0;i--){
        if(v[i]!=vec[i] && r==-1) r=i;
    }
    for(int i=l;i>1;i--){
        if(vec[i]>=vec[i-1]) l--;
        else break;
    }
    for(int i=r;i<n;i++){
        if(vec[i]<=vec[i+1]) r++;
        else break;
    }

cout<<l<<" "<<r<<endl;
}

int_fast32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}