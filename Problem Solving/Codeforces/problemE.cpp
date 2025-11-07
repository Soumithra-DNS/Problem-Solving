#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)

void solve()
{
    int n; cin >> n;
    int a = 1, b = n - 2, c = 1;
    while(true){
        int g = __gcd(a, b);
        if(a + b + g == n & a != b & b != c & c != a){
            cout << a << " " << b << " " << g <<"\n";
            break;
        }else if(a + b + g < n){
            a++;
        }else{
            b--;
        }
    }
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
