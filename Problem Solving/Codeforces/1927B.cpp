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
    int n;cin >> n;
    string s=string(n,' ');
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    char C='a';
    
    for(int i = 0; i < n; i++){
        int k = 0;
        if(arr[i] == 0&& s[i] == ' '){
            for(int j = i; j < n; j++){
                if(arr[j] == k && s[j] ==' '){
                    s[j] = C;
                    k++;
                }
            }
            C++;
        }
    }
    cout << s << endl;

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