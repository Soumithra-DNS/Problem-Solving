#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 3e5 + 9;
const int INF = INT_MAX;

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
    t[n] = min(t[leftChild], t[rightChild]);
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
    t[n] = min(t[leftChild], t[rightChild]);
}

int query(int n, int start, int end, int left, int right)
{
    if (start > right || end < left)
        return INF;
    if (start >= left && end <= right)
        return t[n];
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    int maxLeft = query(leftChild, start, mid, left, right);
    int maxRight = query(rightChild, mid + 1, end, left, right);
    return min(maxLeft, maxRight);
}

void solve()
{
    // int n, m;
    // cin >> n >> m;
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> arr[i];
    // }
    // build(1, 1, n);

    // for (int i = 0; i < m; i++)
    // {
    //     int type;
    //     cin >> type;
    //     int x, y;
    //     cin >> x >> y;
    //     if (type == 1)
    //     {
    //         update(1, 1, n, x + 1, y);
    //     }
    //     else
    //     {
    //         cout << query(1, 1, n, x + 1, y) << "\n";
    //     }
    // }

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
