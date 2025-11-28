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
    t[n] = max(t[leftChild], t[rightChild]);
}

int query(int n, int start, int end, int left, int right, int k)
{
    if (start > right || end < left)
        return 0;
    if (start == end)
        return t[n] > k;
    if (start >= left && end <= right && t[n] <= k)
        return 0;
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    int maxLeft = query(leftChild, start, mid, left, right, k);
    int maxRight = query(rightChild, mid + 1, end, left, right, k);
    return (maxLeft + maxRight);
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    build(1, 1, n);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        cout << query(1, 1, n, l, r, k) << "\n";
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
