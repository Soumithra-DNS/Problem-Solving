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
    string s = "";
    char a;
    if(n > 52){
        a = n - 52 + 'a' - 1;
    }else{
        a = 'a';
    }
    n -= (a - 'a' + 1);
    char b;
    if(n > 26){
        b = n - 26 + 'a' - 1;
    }
    else{
        b = 'a';
    }
    n -=(b - 'a' + 1);
    char c = 'a' + n - 1;
    s +=a;
    s+= b;
    s += c;
    cout << s <<endl;

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
