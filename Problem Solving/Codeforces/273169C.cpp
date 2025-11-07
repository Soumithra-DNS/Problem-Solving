#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5 + 9;
const int INF = 1e18;

int arr[N];
pair<int, int> t[4 * N];

void build(int n, int start, int end)
{
    if (start == end)
    {
        t[n] = {arr[start], 1};
        return;
    }
    int mid = (start + end) /2 ;
    int leftChild = n * 2, rightChild = 2 * n + 1;
    build(leftChild, start, mid);
    build(rightChild, mid + 1, end);
    if (t[leftChild].first > t[rightChild].first)
    {
        t[n] = t[rightChild];
    }
    else if (t[leftChild].first < t[rightChild].first)
    {
        t[n] = t[leftChild];
    }
    else
    {
        t[n] = {t[leftChild].first, t[leftChild].second + t[rightChild].second};
    }
}

void update(int n, int start, int end, int index, int value)
{
    if (start > index || end < index)
        return;
    if (start == end )
    {
        t[n] = {value, 1};
        return;
    }
    int mid = (start + end) / 2;
    int leftChild = n * 2, rightChild = 2 * n + 1;
    update(leftChild, start, mid, index, value);
    update(rightChild, mid + 1, end, index, value);
    if (t[leftChild].first > t[rightChild].first)
    {
        t[n] = t[rightChild];
    }
    else if (t[leftChild].first < t[rightChild].first)
    {
        t[n] = t[leftChild];
    }
    else
    {
        t[n] = {t[leftChild].first, t[leftChild].second + t[rightChild].second};
    }
}

pair<int, int> query(int n, int start, int end, int left, int right)
{
    if (start > right || end < left)
        return {INF, 0};
    if (start >= left && end <= right)
        return t[n];
    int mid = (start + end) / 2;
    int leftChild = n * 2, rightChild = 2 * n + 1;
    pair<int, int> leftResult = query(leftChild, start, mid, left, right);
    pair<int, int> rightResult = query(rightChild, mid + 1, end, left, right);
    if (leftResult.first > rightResult.first)
    {
        return rightResult;
    }
    else if (leftResult.first < rightResult.first)
    {
        return leftResult;
    }
    else
    {
        return {leftResult.first, leftResult.second + rightResult.second};
    }
}

void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    build(1, 1, n);
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int index, value;
            cin >> index >> value;
            update(1, 1, n, index + 1, value);
        }
        else if (type == 2)
        {
            int l, r;
            cin >> l >> r;
            pair<int, int> result = query(1, 1, n, l + 1, r + 1);
            cout << result.first << " " << result.second << "\n";
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
