#include <bits/stdc++.h>
using namespace std;
int maX(int i,const vector<int> &v, int mx)
{
    if (i == v.size())
    {
        return mx;
    }
    mx = max(v[i], mx);
    //cout << mx << " ";
    maX(i + 1, v, mx);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << maX(0, v, INT_MIN) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int maX(int i, const vector<int>& v, int mx)
{
    if (i == v.size())
    {
        return mx;
    }
    mx = max(v[i], mx);
    //cout << mx << " ";
    return maX(i + 1, v, mx); // Ensure to return the result of the recursive call
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << maX(0, v, INT_MIN) << "\n"; // Print the final maximum value
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
