#include<bits/stdc++.h>
using namespace std;
#define    yes              cout << "YES" << endl;
#define    no               cout << "NO" << endl;
#define    ll               long long 
#define    pb               push_back
#define    ppb              pop_back
#define    mp               make_pair
#define    ff               first
#define    ss               second
#define    f(i, s, n)       for(int i = s; i < n; i++)

void solve()
{
    int n; cin >> n;
    vector< int > p(n);

    for(int i = 0; i < n; i++) cin >> p[i];

    sort(p.begin(), p.end());

    int q; cin >> q;
    while(q--)
    {
        int coins; cin >> coins;
        int low = 0, high = n - 1, mid;
        
        while(high > low)
        {
            int mid = (high + low)/2;
            if(p[mid] <= coins)
                low = mid + 1;
            else
                high = mid;
        }
        if(p[low] > coins){
            cout << low << endl;
        }
        else if(p[high] > coins)
            cout << high << endl;
        else
            cout << ++high << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();

    return 0;
}