// #include <bits/stdc++.h>
// using namespace std;
// long long sum(int i, vector<int>&v, long long total){
//     if(i == v.size()){
//         return total;
//     }

//     total += v[i];
//     // cout << v[i];
//     sum(i + 1, v, total);
// }

// void solve()
// {
//     int n; cin >> n;
//     vector<int>v(n);
//     for(int i = 0; i < n; i++){
//         cin >> v[i];
//     }

//     cout << sum(0, v, 0) << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
    
//         solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

long long sum(int i, vector<int>& v, long long total) {
    if (i == v.size()) {
        return total;
    }

    total += v[i];
    return sum(i + 1, v, total); // Return the result of the recursive call
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << sum(0, v, 0) << "\n"; // Print the final sum
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}

