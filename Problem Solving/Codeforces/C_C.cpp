// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int k;
//     cin >> k;

//     int d = 1, cnt = 9, st = 1;

//     while (k > d * cnt)
//     {
//         k -= d * cnt;
//         d++;
//         cnt *= 10;
//         st *= 10;
//     }

//     int num = st + (k - 1) / d;
//     string num_str = to_string(num);

//     cout << num_str[(k - 1) % d] << '\n';
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int t = 1;
//     while (t--)
//         solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long



void solve()
{
    int k; cin >> k;
    string s= "";
    for(int i = 1; i <= 10000; i++){
        s += to_string(i);
    }

    cout << s[k- 1] << "\n";
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

