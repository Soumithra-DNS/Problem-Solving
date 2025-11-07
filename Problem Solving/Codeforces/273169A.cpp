#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 3e5 + 9;
const int INF = 1e9;

int arr[N];
int t[4 * N] = {0};

void build(int n, int start, int end)
{
    if (start == end)
    {
        t[n] = arr[start];
        return;
    }
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    build(leftChild, start, mid);
    build(rightChild, mid + 1, end);
    t[n] = t[leftChild] + t[rightChild];
}

void update(int n, int start, int end, int index, int value)
{
    if (start > index || end < index)
        return;
    if (start == end && start == index)
    {
        t[n] = value;
        return;
    }
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    update(leftChild, start, mid, index, value);
    update(rightChild, mid + 1, end, index, value);
    t[n] = t[leftChild] + t[rightChild];
}

int query(int n, int start, int end, int left, int right)
{
    if (start > right || end < left)
        return 0;
    if (start >= left && end <= right)
        return t[n];
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    int maxLeft = query(leftChild, start, mid, left, right);
    int maxRight = query(rightChild, mid + 1, end, left, right);
    return maxLeft + maxRight;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    build(1, 1, n);
    for (int i = 0; i < m; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int ind, val;
            cin >> ind >> val;
            update(1, 1, n, ind + 1, val);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l + 1, r) << "\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
