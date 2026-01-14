#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pf push_front
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)(x).size()
#define ff first
#define ss second

const int MOD = 1e9 + 7;
const int INF = 1e18;
const ld PI = 3.141592653589793238462;
const ld EPS = 1e-9;
const int N = 3e5 + 9;

template <typename T>
void read(vector<T> &v) {
    for (auto &x : v) cin >> x;
}

template <typename T>
void show(const T &container) {
    for (const auto &x : container) cout << x << " ";
    cout << "\n";
}


struct Node
{
    Node *links[26] = {nullptr};
    int cntEndWith = 0;
    int cntPrefix = 0;

    bool containsKey(char ch)
    {
        return links[ch - 'a'] != nullptr;
    }

    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }

    Node *get(char ch)
    {
        return links[ch - 'a'];
    }

    void increaseEnd()
    {
        cntEndWith++;
    }

    void increasePrefix()
    {
        cntPrefix++;
    }

    void deleteEnd()
    {
        cntEndWith--;
    }

    void reducePrefix()
    {
        cntPrefix--;
    }
};

Node *root = new Node();

void deleteTrie(Node *node)
{
    for (int i = 0; i < 26; ++i)
    {
        if (node->links[i])
        {
            deleteTrie(node->links[i]);
        }
    }
    delete node;
}

void insert(const string &word)
{
    Node *node = root;
    for (char ch : word)
    {
        if (!node->containsKey(ch))
        {
            node->put(ch, new Node());
        }
        node = node->get(ch);
        node->increasePrefix();
    }
    node->increaseEnd();
}

bool search(const string &word)
{
    Node *node = root;
    for (char ch : word)
    {
        if (!node->containsKey(ch))
        {
            return false;
        }
        node = node->get(ch);
    }
    return node->cntEndWith > 0;
}

bool startsWith(const string &prefix)
{
    Node *node = root;
    for (char ch : prefix)
    {
        if (!node->containsKey(ch))
        {
            return false;
        }
        node = node->get(ch);
    }
    return true;
}

int countWordsEqualTo(const string &word)
{
    Node *node = root;
    for (char ch : word)
    {
        if (!node->containsKey(ch))
        {
            return 0;
        }
        node = node->get(ch);
    }
    return node->cntEndWith;
}

int countWordsStartingWith(const string &prefix)
{
    Node *node = root;
    for (char ch : prefix)
    {
        if (!node->containsKey(ch))
        {
            return 0;
        }
        node = node->get(ch);
    }
    return node->cntPrefix;
}

void erase(const string &word)
{
    Node *node = root;
    for (char ch : word)
    {
        if (node->containsKey(ch))
        {
            node = node->get(ch);
            node->reducePrefix();
        }
        else
        {
            return;
        }
    }
    node->deleteEnd();
}

void solve()
{
    
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

