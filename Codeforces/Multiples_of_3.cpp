#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 3e5 + 9;
const int INF = 1e9;

int arr[N];
int t[4 * N] = {0};

int build(int n, int start, int end)
{
    if (start == end)
    {
        return (t[n] % 3 == 0);
    }
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    int l = build(leftChild, start, mid);
    int r = build(rightChild, mid + 1, end);
    return t[n] = l + r;
}

int update(int n, int start, int end, int left, int right)
{
    if (start > right || end < left)
        return t[n];
    if (start == end)
    {
        t[n] += 1;
        return (t[n] % 3 == 0);
    }
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    int l = update(leftChild, start, mid, left, right);
    int r = update(rightChild, mid + 1, end, left, right);
    return t[n] = l + r;
}

int query(int n, int start, int end, int left, int right)
{
    if (start > right || end < left)
        return 0;
    if (start == end)
        return (t[n] % 3 == 0);
    if (start >= left && end <= right)
        return t[n];
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    int maxLeft = query(leftChild, start, mid, left, right);
    int maxRight = query(rightChild, mid + 1, end, left, right);
    return (maxLeft + maxRight);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    build(1, 1, n);
    while (q--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << query(1, 1, n, l + 1, r + 1) << "\n";
        }
        else
        {
            update(1, 1, n, l + 1, r + 1);
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
