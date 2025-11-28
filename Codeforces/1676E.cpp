#include<bits/stdc++.h>
using namespace std;
void sdns()
{
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end(),greater<int>());
    for(int i=1;i<n;i++)
        v[i]=v[i]+v[i-1];

    while(q--){
        int x; cin >>x;
        int ans=lower_bound(v.begin(),v.end(),x)-v.begin();
        ans++;
        if(ans>n) cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }

}

int main()
{
    int t; cin >> t;
    while(t--){
        sdns();
    }
    return 0;
}

/*3
8 7
4 3 3 1 1 4 5 9
1
10
50
14
15
22
30
4 1
1 2 3 4
3
1 2
5
4
6
*/
