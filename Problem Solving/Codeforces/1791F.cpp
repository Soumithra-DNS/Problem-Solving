#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, q, l, r, x;
    cin>>n>>q;
    vector<long long>v(n+1), a(n+2, 0);

    for(int i = 1; i <= n; i++)
        cin>>v[i];

    for(int i = 0; i < q; i++){
        cin>>x;
        if(x == 1){
            cin>>l>>r;
            a[l] += 1;
            a[r+1] = -1;
        }
        else{
            cin>>l;
            for(int i = 1; i <= l; i++){
                a[i+1] = a[i] + a[i+1];
            }
            while(a[l]--){
                int k = log10(v[l]);
                if(k == 0) break;
                int sum = 0;
                while(v[l] > 0){
                    sum += (v[l]%10);
                    v[l] /= 10;
                }
                v[l] = sum;
            }
            a[l] = 0;
            cout<<v[l]<<"\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test;
    cin>>test;
    while(test--)
        solve();
}
