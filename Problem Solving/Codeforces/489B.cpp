#include <bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9 + 7;
using namespace std;

void solve()
{
    int n; 
    cin >> n;
    int boys[n];
    for(int i=0; i<n; i++)
    {
        cin >> boys[i];
    }
    sort(boys, boys + n);

    int m;
    cin >> m;
    int girls[m];
    for(int i=0;i<m;i++)
    {
        cin >> girls[i];
    }
    sort(girls, girls + m);

    int b = 0, g = -1, pair=0;
    for(int i=0; i<n; i++)
    {
        int x=g;
        for(int j=++x; j<m; j++)
        {
            if(abs(boys[i]-girls[j])<=1)
            {
                pair++;
                g=j;
                break;
            }
        }
    }

    cout<< pair <<endl;

}

int_fast32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();

    return 0;
}