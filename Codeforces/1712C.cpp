#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int>v(n);
    set<int>s;
    vector<int>temp(n+1,-1);

    for(int i=0;i<n;i++)
        cin >> v[i];
    int j=0;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1] || temp[v[i]]==0){
            for( ;j<=i;j++){
                s.insert(v[j]);
                temp[v[j]]=0;
            }
        }
    }
    if(temp[v[n-1]]==0){
        for( ;j<n-1;j++){
                s.insert(v[j]);
            }
    }
    cout<<s.size()<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}


