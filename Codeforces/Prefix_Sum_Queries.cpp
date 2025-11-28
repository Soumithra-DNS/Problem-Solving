#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5e5 + 9;
const int INF = 1e15;

int arr[N], t[4 * N];
int ans = 0;

void build(int n, int st, int ed)
{
    if (st == ed)
    {
        t[n] = arr[st];
        return;
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    build(lc, st, mid);
    build(rc, mid + 1, ed);
    t[n] = t[lc] + t[rc];
}

void update(int n, int st, int ed, int ind, int val)
{
    if (st > ind || ed < ind)
        return;
    if (st == ed && st == ind)
    {
        t[n] = val;
        return;
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    update(lc, st, mid, ind, val);
    update(rc, mid + 1, ed, ind, val);
    t[n] = t[lc] + t[rc];
}

int query(int n, int st, int ed, int l, int r)
{
    if (st > r || ed < l)
        return 0;
    if (st >= l && ed <= r){
        ans = max(ans, t[n]);
        return t[n];
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    int maxL = query(lc, st, mid, l, r);
    int maxR = query(rc, mid + 1, ed, l, r);
    //cout <<st << " " <<  mid << " " << ed << " "<< maxL << " " << maxR << "\n";
    ans = max(ans, maxL + maxR);
    return maxL + maxR;
}

void solve()
{
    memset(t, 0, sizeof t);
    memset(arr, 0, sizeof arr);
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    build(1, 1, n);
    while(q--){
        int type, l, r, ind, val;
        cin >> type;
        if(type == 1){
            cin >> ind >> val;
            update(1, 1, n, ind, val);
        }else{
            cin >> l >> r;
            ans = 0;
            query(1, 1, n, l, r);
            cout << ans << "\n";
        }
    }
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
