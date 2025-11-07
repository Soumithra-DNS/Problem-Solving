#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int z = 0; z < k; z++){
    int n, m, l = 0;
    long long int sum = 0;
    cin >> n >> m;
    int a[n], index;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> index;
        for(int j = 0; j < n; j++){
            if(a[l] > a[j])
                l = j;
        }
        sum -= a[l];
        sum += index;
        a[l] = index;
        l = 0;
    }
    cout<<sum<<"\n";
    }
}
