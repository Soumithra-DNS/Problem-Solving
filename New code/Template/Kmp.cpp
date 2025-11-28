vector<int> build_lps(const string &p) {
    int m = p.size();
    vector<int> lps(m, 0);
    for (int i = 1, j = 0; i < m; i++) {
        while (j > 0 && p[i] != p[j]) {
            j = lps[j - 1];
        }
        if (p[i] == p[j]) {
            j++;
        }
        lps[i] = j;
    }
    return lps;
}

vector<int> kmp(const string &s, const string &p) {
    int n = s.size(), m = p.size();
    vector<int> ans;
    vector<int> lps = build_lps(p);
    for (int i = 0, j = 0; i < n; i++) {
        while (j > 0 && s[i] != p[j]) {
            j = lps[j - 1];
        }
        if (s[i] == p[j]) {
            j++;
        }
        if (j == m) {
            ans.push_back(i - m + 1);
            j = lps[j - 1];
        }
    }
    return ans;
}