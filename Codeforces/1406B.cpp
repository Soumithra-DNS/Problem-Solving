// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
//    int n;
//    cin >> n;
//    int a[101]={},temp,ans=0,z=0;
//    for(int i=0;i<n;i++)
//    {
//         cin >> temp;
//         a[temp]++;
//    }

//    for(int i=0;i<101;i++)
//    {
//         if(a[i]<2)
//         {
//             if(a[i]==0)
//             {
//                 if(z==1)
//                 {
//                     ans+=i;
//                     break;
//                 }
//                 else
//                 {

//                     ans=i*2;
//                     break;
//                 }
//             }
//             else
//             {
//                 if(z==1)
//                 {
//                     /*=i;
//                     break;*/
//                 }
//                 else
//                 {
//                     z=1;
//                     ans+=i;
//                 }
//             }
//         }
//    }

//    cout<<ans << endl;

// }

// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t;   cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long r = n - 5;
    long long l = 0, ans = LONG_LONG_MIN;
    while (l <= 5)
    {
        long long ll = 1;
        for (int i = 0; i < l; i++)
        {
            ll *= v[i];
        }
        long long rr = 1;
        for (int i = r; i < n; i++)
        {
            rr *= v[i];
        }
        r++;
        l++;
        ans = max(ans, rr * ll);
    }

    cout << ans << "\n";
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

// int ans = 1, l = 0, r = n - 4;
// int a = v[l];
// int b = v[r] * v[r + 1] * v[r + 2] * v[r + 3];
// ans = b * v[r - 1];
// ans = max(ans, max(a, b));
// l++;
// a *= v[l];
// b /= v[r];
// r++;
// ans = max(ans, max(a, b));
// l++;
// a *= v[l];
// b /= v[r];
// r++;
// ans = max(ans, max(a, b));
// l++;
// a *= v[l];
// b /= v[r];
// r++;
// ans = max(ans, max(a, b));
// l++;
// a *= v[l];
// ans = max(ans, a);

// for(int i = 0; i < 3; i++){

//     if(i == 2){
//         if(v[l] > v[r]){
//             ans *= v[l];
//         }else{
//             ans *= v[r];
//         }
//         continue;
//     }
//     if(v[l] * v[l + 1] > v[r] * v[r - 1]){
//         ans *= ( v[l] * v[l + 1]);
//         l += 2;
//     }else{
//         ans *= ( v[r] * v[r - 1]);
//         r -= 2;
//     }
// }
