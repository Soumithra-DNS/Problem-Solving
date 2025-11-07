#include<bits/stdc++.h>
using namespace std;
bool solve(int x, int y)
{
    if(x==y) return 1;
    if(x<y) return 0;
    if(x%3!=0) return 0;
    return solve(x/3, y) || solve(2*x/3 , y);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;

        if(solve(n,m)) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
    }
    return 0;
}






