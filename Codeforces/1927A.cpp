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
    string s; cin >> s;
    int i = 0;
    while(i < s.size()){
        if(s[i] == 'B'){
            break;
        }
        i++;
    }
    int j = s.size() - 1;
while(j >= 0){
    if(s[j] == 'B'){
        break;
    }
    if(i == j){
        cout<< 0 << endl;
        return;
    }
    j--;

}
cout << j - i + 1 << endl;
return;

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
