#include<bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9+7;
using namespace std;

void solve()
{
    int n, k, r, c; cin >> n >> k >> r >> c;
    int counter[n+1]={};
    for(int i=1;i<=n-1;i++){
        bool status = true;
        for(int j=1;j<=n;j++){
            if(i==r && j==c){
                cout<<'X';
                counter[j]=1;
                status = false;
            }else{
                if(j%k){
                    if(counter[j]==0 && status){
                        cout<<'X';
                        counter[j]=1;
                        status = false;
                    }else{
                        cout<<'.';
                    }
                }else{
                    if(status){
                        cout<<'X';
                        counter[j]=1;
                    }
                    else{
                        cout<<'.';
                        status = true;
                    }
                }
            }
        }
        cout<<endl;
    }
    int i=n;
    bool status = true;
    for(int z=1;z<=n;z++){
        if(i==r && z==c){
            cout<<'X';
            counter[z]=1;
            status = false;
            continue;
        }
        if(z%k==0){
            if(status) cout<<'X';
            else{
                cout<<'.';
                status = true;
            }
        }else{
            if(counter[z]==0){
            cout<<'X';
            status = false;
            }
            else{
            cout<<'.';
            }
        }
        
    }
    cout<<endl;

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