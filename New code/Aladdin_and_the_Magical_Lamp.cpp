#include <bits/stdc++.h>
using namespace std;

// Function to compute the longest common substring of three strings
int lcs3(const string& a, const string& b, const string& c) {
    int n = a.size(), m = b.size(), l = c.size();
    vector<int> prev((l + 1), 0), curr((l + 1), 0);
    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = m; j >= 1; --j) {
            for (int k = l; k >= 1; --k) {
                if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1]) {
                    curr[k] = prev[k - 1] + 1;
                    ans = max(ans, curr[k]);
                } else {
                    curr[k] = 0;
                }
            }
        }
        fill(prev.begin(), prev.end(), 0);
        swap(prev, curr);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string dummy;
    getline(cin, dummy); // absorb newline after number of test cases

    for (int cs = 1; cs <= t; ++cs) {
        getline(cin, dummy); // absorb blank line

        string a, b, c;
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);

        int result = lcs3(a, b, c);
        cout << "Case " << cs << ": " << result << "\n";
    }

    return 0;
}
