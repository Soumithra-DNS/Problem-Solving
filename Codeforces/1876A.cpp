#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair<int ,int>p1,pair<int ,int> p2){
    return p1.second<p2.second;
}


void solve()
{
    long long n, p; cin >> n >> p;
    vector<pair< long long, long long>> v(n);
    for( int i=0; i< n; i++)
    {
        cin >> v[i].second;
    }
    for( int i=0; i< n; i++)
    {
        cin >> v[i].first;
    }

    sort(v.begin(),v.end());

    long long cost = p, residents = 1, j=0;

    while(residents<n && j<n)
    {
        residents+=v[j].second;
        cost+=min(v[j].first,p)*v[j].second;
        j++;
    }
    
    if(residents > n)
    {
        cost-=(residents - n)*min(v[--j].first,p);
    }

    cout<< cost << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

