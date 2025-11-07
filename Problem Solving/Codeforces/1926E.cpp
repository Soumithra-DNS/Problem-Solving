/*#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int p = 1;
    int N = n;
    int past = 0;
    while (cnt < k)
    {
        past = cnt;
        p = 1 << p;
        N = (N + 1) / 2;
        cnt += N;
    }
    p = p / 2;
    int ex = k - past;
    int ans = ((1 << p) * (ex - 1)) + p;
    cout << ans << '\n';
    return;
}

int32_t main()
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
}*/

#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, k, p = 1, past = 0;
    cin>>n>>k;
    int cnt = 1;
    cnt = (n+p)/(1<<p);
    p++;
    while(cnt < k){
        past = cnt;
        cnt += (n+p)/(1<<p);
        if((n+p)/(1<<p) == 0) cnt++;
        p++;
    }
    p--;
    int m = k-past;
    int best = (m-1)*(1LL<<p) + (1LL<<p)/2;
    if(best > 10e9) best = best/(10e1);
    cout<<best<<"\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test;
    cin>>test;
    while(test--)
        solve();
}
