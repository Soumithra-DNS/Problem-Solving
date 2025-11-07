// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// void solve()
// {
//     int n, w;
//     cin >> n >> w;
//     vector<int> v(n);
//     multiset<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         st.insert(x);
//     }
//     int ans = 1;
//     int trg = w;
//     while (!st.empty())
//     {
//         auto it = st.upper_bound(trg);
//         if (it == st.begin())
//         {
//             trg = w;
//             ans++;
//         }
//         else
//         {
//             it--;
//             trg -= (*it);
//             st.erase(it);
//         }
//     }

//     cout << ans << "\n";
// }

// int32_t main()
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

// const int N = 3e5 + 9;
// const int inf = 1e9;

// int a[N];
// int t[4 * N] = {0};

// void build(int n, int start, int end)
// {
//     if (start == end)
//     {
//         t[n] = a[start];
//         return;
//     }
//     int mid = (start + end) >> 1, l = n << 1, r = l | 1;
//     build(l, start, mid);
//     build(r, mid + 1, end);
//     t[n] = max(t[l], t[r]);
// }

// void upd(int n, int start, int end, int i, int x)
// {
//     if (start > i || end < i)
//         return;
//     if (start == end && start == i)
//     {
//         t[n] = x;
//         return;
//     }
//     int mid = (start + end) >> 1, l = n << 1, r = l | 1;
//     upd(l, start, mid, i, x);
//     upd(r, mid + 1, end, i, x);
//     t[n] = max(t[l], t[r]);
// }

// int query(int n, int start, int end, int i, int j)
// {
//     if (start > j || end < i)
//         return -inf;
//     if (start >= i && end <= j)
//         return t[n];
//     int mid = (start + end) >> 1, l = n << 1, r = l | 1;
//     int L = query(l, start, mid, i, j);
//     int R = query(r, mid + 1, end, i, j);
//     return max(L, R);
// }


#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 9;
const int INF = 1e9;

int a[N];
int t[4 * N] = {0};

void build(int n, int start, int end)
{
    if (start == end)
    {
        t[n] = a[start];
        return;
    }
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    build(leftChild, start, mid);
    build(rightChild, mid + 1, end);
    t[n] = max(t[leftChild], t[rightChild]);
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
    t[n] = max(t[leftChild], t[rightChild]);
}

int query(int n, int start, int end, int left, int right)
{
    if (start > right || end < left)
        return -INF;
    if (start >= left && end <= right)
        return t[n];
    int mid = (start + end) >> 1;
    int leftChild = n << 1, rightChild = leftChild | 1;
    int maxLeft = query(leftChild, start, mid, left, right);
    int maxRight = query(rightChild, mid + 1, end, left, right);
    return max(maxLeft, maxRight);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    build(1, 0, n - 1);
    // for(int i = 0; i < 20; i++){
    //     cout << t[i] << " ";
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            cout << query(1, 0, n - 1, l, r) << '\n';
        }
        else if (type == 2)
        {
            int index, value;
            cin >> index >> value;
            update(1, 0, n - 1, index, value);
        }
    }

    return 0;
}

// struct ST
// {
//     int t[4 * N];
//     static const int inf = 1e9;
//     ST()
//     {
//         memset(t, 0, sizeof t);
//     }
//     void build(int n, int start, int end)
//     {
//         if (start == end)
//         {
//             t[n] = a[start];
//             return;
//         }
//         int mid = (start + end) >> 1, l = n << 1, r = l | 1;
//         build(l, start, mid);
//         build(r, mid + 1, end);
//         t[n] = max(t[l], t[r]);
//     }
//     void upd(int n, int start, int end, int i, int x)
//     {
//         if (start > i || end < i)
//             return;
//         if (start == end && start == i)
//         {
//             t[n] = x;
//             return;
//         }
//         int mid = (start + end) >> 1, l = n << 1, r = l | 1;
//         upd(l, start, mid, i, x);
//         upd(r, mid + 1, end, i, x);
//         t[n] = max(t[l], t[r]);
//     }
//     int query(int n, int start, int end, int i, int j)
//     {
//         if (start > j || end < i)
//             return -inf;
//         if (start >= i && end <= j)
//             return t[n];
//         int mid = (start + end) >> 1, l = n << 1, r = l | 1;
//         int L = query(l, start, mid, i, j);
//         int R = query(r, mid + 1, end, i, j);
//         return max(L, R);
//     }
// } t;

// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     return 0;
// }