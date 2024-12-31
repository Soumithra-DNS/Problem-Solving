// #include <bits/stdc++.h>
// using namespace std;

// template <typename T>
// ostream &operator<<(ostream &os, const vector<T> &v)
// {
//     os << '{';
//     for (const auto &x : v)
//         os << " " << x;
//     return os << '}';
// }

// void solve()
// {
//     int n, m, q, u, v, w;
//     cin >> n >> m >> q;
//     vector<pair<int, int>> adj[n + 1];

//     for (int i = 0; i < m; i++)
//     {
//         cin >> u >> v >> w;
//         adj[u].push_back({v, w});
//         adj[v].push_back({u, w});
//     }

//     for (int i = 0; i < q; i++)
//     {
//         int src;
//         cin >> src;
//         vector<int> dis(n + 1, 1e9);
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//         dis[src] = 0;
//         pq.push({0, src});
//         while (!pq.empty())
//         {
//             auto str = pq.top();
//             pq.pop();
//             int u = str.first;
//             int v = str.second;
//             for (auto c : adj[v])
//             {
//                 int node = c.first;
//                 int d = c.second;
//                 if (dis[node] > dis[v] + d)
//                 {
//                     dis[node] = dis[v] + d;
//                     pq.push({dis[node], node});
//                 }
//             }
//         }
//         int maxi = INT_MIN, ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (dis[i] != 1e9 && dis[i] != 0)
//             {
//                 maxi = max(maxi, dis[i]);
//                 if (dis[i] == maxi)
//                     ans++;
//             }
//         }
//         if (maxi == INT_MIN)
//         {
//             cout << "0 1\n";
//         }
//         else
//             cout << maxi << ' ' << count(dis.begin(), dis.end(), maxi) << "\n";
//         // cout<<dis<<"\n";
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int test = 1;
//     // cin>>test;
//     while (test--)
//         solve();
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     int cnt = 0;
//     map<int, int> mp;
//     for (int i = 2; i <= 10000000; i++)
//     {
//         int div = 0;
//         for (int j = 1; j <= sqrt(i); j++)
//         {
//             if (i % j == 0)
//             {
//                 div++;
//             }
//         }
//         if (i != 1)
//         {
//             div++;
//         }
//         if (div + cnt <= n)
//         {
//             cnt += div;
//             mp[i] = div;
//         }
//         if(n - cnt == 1){
//             mp[1] = 1;
//         }
//         /*else
//         {
//             auto it = mp.find(div + cnt - n);
//             if (it != mp.end())
//             {
//                 cnt -= it->second;
//                 it->second = 0;
//                 cnt += div;
//                 mp[i] = div;
//             }
//         }*/

//         if (cnt == n)
//         {
//             break;
//         }
//     }
//     for (auto it = mp.begin(); it != mp.end(); it++)
//     {
//         if (it->second != 0)
//         {
//             int t = it->second;
//             while (t--)
//             {
//                 cout << it->first << " ";
//             }
//         }
//     }
//     cout << "\n";
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
//     int n, m;
//     cin >> n >> m;

//     char s[n][m];
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> s[i][j];
//             if (s[i][j] == 'X')
//             {
//                 cnt++;
//             }
//         }
//     }
//     if (cnt <= max(n, m))
//     {
//         cout << "YES" << "\n";
//         return;
//     }
//     else
//     {
//         for (int i = 1; i <= max(n, m); i++)
//         {
//             if (cnt % i == 0)
//             {
//                 int d = cnt / i;
//                 if (d <= min(n, m))
//                 {
//                     cout << "YES" << "\n";
//                     return;
//                 }else{

//                 }
//             }
//         }
//     }

//     cout << "NO" << "\n";
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
// int cnt = 0;
// int ans = 0;
// int edg = 0;

// vector<vector<int>> grp(2000005);
// vector<bool> vis(2000005);

// void dfs(int v)
// {
//     cnt++;
//     vis[v] = true;
//     for (int u : grp[v])
//     {
//         edg++;
//         if (!vis[u])
//             dfs(u);
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, m;
//     cin >> n >> m;

//     while (m--)
//     {
//         int u, v;
//         cin >> u >> v;
//         grp[u].push_back(v);
//         grp[v].push_back(u);
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (!vis[i])
//         {
//             cnt = 0;
//             edg = 0;
//             dfs(i);
//             //ans += (((cnt * (cnt - 1)) / 2) - ((edg / 2)));
//             edg >>= 1;
//             int total = (cnt*(cnt-1))>>1;
//             ans += (total - edg);
//         }
//     }
//     cout << ans << "\n";

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, m, q; cin >> n >> m >> q;
//     int a, b, l;
//     vector<pair<int , int>>adj[n + 1];

//     while(m--){
//         cin >> a >> b >> l;
//         adj[a].push_back({b, l});
//         adj[b].push_back({a, l});
//     }

//     while(q--){
//         int src; cin >> src;
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//         vector<int>dis(n + 1,INT_MAX);
//         pq.push({0, src});
//         dis[src] = 0;
//         while(!pq.empty()){
//             auto top = pq.top();
//             pq.pop();
//             int u = top.first;
//             int v = top.second;
//             for(auto i : adj[v]){
//                 int node = i.first;
//                 int d = i.second;
//                 if(dis[node] > dis[v] + d){
//                     dis[node] = dis[v] + d;
//                     pq.push({dis[node], node});
//                 }
//             }
//         }

//         int mx = INT_MIN;
//         for(int i = 0; i < n + 1; i++){
//             if(dis[i] != INT_MAX){
//                 mx = max(mx, dis[i]);
//             }
//         }

//         if(mx == INT_MIN){
//             cout << "0 1" << "\n";
//         }else{
//             cout << mx << " " << count(dis.begin(), dis.end(), mx) << "\n";
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
// const int mod = 1e9 + 7;
// int dp[100];
// // int fact(int n)
// // {
// //     if (n == 1)
// //     {
// //         return 1;
// //     }
// //     return (((n % mod) * (fact(n - 1) % mod)) % mod);
// //     // return ans;
// // }
// int32_t main()
// {
//     // long long ans = fact(100) % mod;
//     float sum = 0;
//     int i = 5;
//     sum = sum + 5.0/ i;
//     cout << sum << "\n";
// }

// C++ program to demonstrate
// working of stoi()
// Work only if compiler supports
// C++11 or above. Because STOI()
// was added in C++ after 2011
// #include <bits/stdc++.h>
// using namespace std;

// // Driver code
// int main()
// {
// 	long long n = 1e12;
// 	cout << sqrt(n) << "\n";
// }

#include <bits/stdc++.h>
using namespace std;

void slv()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	set<pair<int, int>> s;
	for (int i = 0; i < n; ++i)
	{
		s.insert({v[i], i});
	}

	int s_val = 1, e_val = n;
	vector<int> ans;

	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 != 0)
		{
			auto it = s.lower_bound({s_val, 0});
			if (it != s.end() && it->first == s_val)
			{
				ans.push_back(it->second);
				s.erase(it);
				s_val++;
			}
		}
		else
		{
			auto it = s.lower_bound({e_val, 0});
			if (it != s.end() && it->first == e_val)
			{
				ans.push_back(n - 1 - it->second);
				s.erase(it);
				e_val--;
			}
		}
	}

	for (auto &index : ans)
	{
		cout << index << "\n";
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 1;
	while (t--)
	{
		slv();
	}

	return 0;
}
