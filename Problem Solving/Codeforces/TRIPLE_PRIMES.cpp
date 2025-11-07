#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e10 + 5;
const ll mx = sqrt(N);
vector<bool> vec(N, true);
vector<ll> ans;

void siv()
{
    for (ll i = 2; i <= mx; i++)
    {
        if (vec[i] == true)
        {
            ans.push_back(i);
            for (ll j = i * i; j <= mx; j += i)
            {
                vec[j] = false;
            }
        }
    }
}


void solve()
{
    ll n; cin >> n;
    ll size = (ll)ans.size();
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            ll x = n - (ans[i] * ans[i] + ans[j] * ans[j] );
            if(x < 1){
                cout << "No" << "\n";
                    return;
            }
            ll y = sqrt(x);
            if(x == y * y){
                if(vec[y] == true){
                    cout << "Yes" << "\n";
                    return;
                }
            }
        }
    }

    cout << "No" << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    siv();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
