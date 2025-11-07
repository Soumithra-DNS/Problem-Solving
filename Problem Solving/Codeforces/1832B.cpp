#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    vector<long long> v(n+1);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    long long sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        v[i]=sum;
    }
    long long ans=0;
    for(int i=0;i<=k;i++){
        ans=max(ans,v[n-i]-v[2*(k-i)]);
    }

    cout<< ans << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/*
6
5 1
2 5 1 10 6
5 2
2 5 1 10 6
3 1
1 2 3
6 1
15 22 12 10 13 11
6 2
12 13 15 22
5 1
999999996 999999999 999999997 999999998 999999995

21
11
3
62
46
3999999986


*/
