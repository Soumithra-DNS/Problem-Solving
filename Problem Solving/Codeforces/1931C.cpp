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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    int i = 0;
    int j = n -1;
    bool lock = false, lock1 = false;
    while(i < j){
        if(arr[i] == arr[i + 1]){
            i++;
        }else{
            lock = true;
        }
        if(arr[j] == arr[j - 1]){
            j--;
        }else{
            lock1 = true;
        }
        if(lock && lock1){
            break;
        }
    }
    int x = j - i - 1;
    if(x < 0){
        x = 0;
    }
    if(arr[i] == arr[j]){
        cout << x << endl;
        return;
    }
    x = max(i + 1, n - j);
    cout << n - x << endl;
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
