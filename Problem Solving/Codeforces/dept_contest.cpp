#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<string>st;
    string s;
    map<string, int> mp;
    int n; cin >> n;
    while(n--){
        cin >> s;
        st.push(s);
        mp[s] = 1;
    }

    while(!st.empty()){
        string x = st.top();
        st.pop();
        if(mp[x] == 1){
            mp[x] = 0;
            cout << x <<"\n";
        }
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n, x;
//     cin >> n;

//     priority_queue <long long, vector<long long>, greater<long long>> pq;
//     long long ans = 0;
    

//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         pq.push(x);
//         if(n == 1){
//             cout << 0 << "\n";
//             return;
//         }
//     }
//     while(!pq.empty()){
//         long long a = pq.top();
//         pq.pop();
//         long long b = pq.top();
//         pq.pop();
//         if(!pq.empty())
//             pq.push(a + b);
//         ans += (a + b);
//     }
    
    
//     cout << ans << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         mp[x] = 1;
//     }
//     auto it = mp.begin();
//     if(it == mp.end()){
//         cout << "NO" << "\n";
//         return;
//     }
//     it++;
//     if(it == mp.end()){
//         cout << "NO" << "\n";
//         return;
//     }
//     cout << it->first << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     solve();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     vector<pair<int, int>> v;
//     int n; cin >> n;
//     for(int i = 0; i < n; i++){
//         int x, y; cin >> x >> y;
//         v.push_back({x, y});
//     }

//     for(int i = 0; i < n; i++){
//         cout << "Case "<<i + 1<<": "<<v[i].first + v[i].second <<"\n";
//     }

// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//         solve();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, q; cin >> n >> q;
//     vector<vector<int>> v(n);
//     for(int i = 0; i < n; i++){
//         int m; cin >> m;
//         for(int j = 0; j < m; j++){
//             int x; cin >> x;
//             v[i].push_back(x);
//         }
//     }
//     while (q--)
//     {
//         int U, V; cin >> U >> V;
//         cout << v[U][V] << "\n";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     long long n; cin >> n;
//     queue<long long> q;
//     while(n--){
//         int v; cin >> v;
//         if(v == 1){
//             int x; cin >> x;
//             q.push(x);
//         }else if(v == 2){
//             if(!q.empty()){
//                 q.pop();
//             }
//         }else{
//             if(q.empty()){
//                 cout << "Empty!"<<"\n";
//             }else{
//                 cout << q.front() << "\n";
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ans = n;


    vector<long long> v(n);
    vector<int> vis(1e5 + 7);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int r = n - 1;
    if (n == 1)
    {
        cout << 1 << "\n";
        return 0;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        while(vis[r] && r >= 0){
            r--;
        }
        if (v[r] / v[i] >= 2  && vis[r] != 1)
        {
            r--;
            ans--;
            vis[i] = 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
