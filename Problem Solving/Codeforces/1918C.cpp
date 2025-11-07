#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, b, r;
    cin >> a >> b >> r;
    if(a < b){
        swap(a, b);
    }
    long long int x = 0 ;
    long long int i ;
    for(i = 60; i >= 0; i--){
        if( (a & (1LL << i))  and !(b & (1LL<<i) )  ){
            break;
        }
    }
    // i = 64 ;
    for (long long int j = i-1 ; j >= 0; j-- )
    {
        if ( ((1LL << j) & a ) && !(( 1LL << j) & b) )
        {
            if( (x | (1LL << j)) <= r)
                x |= (1LL << j) ;
        }
    }
    cout << abs((a ^ x )- (b ^ x ))<< "\n";
}

int main()
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
}


