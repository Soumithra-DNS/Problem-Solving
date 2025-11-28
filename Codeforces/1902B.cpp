#include <bits/stdc++.h>
using namespace std;
bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

void solve()
{
    long long int n, p, l, t, x = 0, y = 0, z, i;
    cin >> n >> p >> l >> t;

    for (i = 8; i <= n; i = i + 14)
    {
        p -= (l + (2 * t));
        x = i;
        y++;
        if (p <= 0)
            break;
    }

    if ((n - x >= 7 && p > 0) || n < 8)
        p -= (l + t), y++;
    if (p > 0)
    {
        z = p / l;
        if (p % l != 0)
            z++;
        y += z;
    }

    cout << (n - y) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long long double
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define FASTIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
void wrong()
{
  ll n, p, l, t;
  cin >> n >> p >> l >> t;
  ll ini = 0, fi = n, mid = 0;
  ll total = (n + 6) / 7;
  while (fi - ini > 1)
  {
    mid = (ini + fi) / 2;
    ll st=mid+1;
    ll points=(n-mid)*l;
    ll work=min(mid*2,total);
    ll tem=work*t;
    points+=tem;
    if(points>=p)
    {
      ini=mid;
    }
    else
    fi=mid;
  }
  cout<<ini<<"\n";
}
int main()
{
  FASTIO;
  int test;
  cin >> test;
  while (test--)
  {
    wrong();
  }
  return 0;
}
*/