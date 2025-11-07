#include<bits/stdc++.h>
using namespace std;
#define    yes              cout << "YES" << endl;
#define    no               cout << "NO" << endl;
#define    ll               long long 
#define    pb               push_back
#define    ppb              pop_back
#define    mp               make_pair
#define    ff               first
#define    ss               second
#define    f(i, s, n)       for(int i = s; i < n; i++)

const int mx = 2e5+1;
int p[mx];
int a[mx];
int b[mx];

void solve()
{
    int n; cin >> n;
    for(int i=1; i<= n; i++ ) cin >> p[i];
    for(int i=1; i<= n; i++ ) cin >> a[i];
    for(int i=1; i<= n; i++ ) cin >> b[i];

    priority_queue<int, vector<int>, greater<int>> q[5][5];
    for(int i = 1;i <= n; i++)
    q[a[i]][b[i]].push(p[i]);

    int m; cin >> m;
    while(m--)
    {
        int c; cin >> c;
        int ans = INT_MAX;
        int f, b;
        
        for(int i = 1; i<= 3; i++)
        {
            if(!q[c][i].empty() && q[c][i].top() < ans)
            {
                ans = q[c][i].top();
                f = c;
                b = i;
            }
        }
        for(int i = 1; i<= 3; i++)
        {
            if(!q[i][c].empty() && q[i][c].top() < ans)
            {
                ans = q[i][c].top();
                f = i;
                b = c;
            }
        }

        if(ans != INT_MAX)
        {
            q[f][b].pop();
            cout << ans << " ";
        }
        else 
        cout << "-1" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}