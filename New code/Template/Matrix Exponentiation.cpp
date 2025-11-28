// Function to multiply two matrices
vector<vector<int>> multiply(const vector<vector<int>> &a, const vector<vector<int>> &b)
{
    int size = a.size();
    vector<vector<int>> ans(size, vector<int>(size, 0));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                ans[i][j] = (ans[i][j] + (a[i][k] * b[k][j]) % M) % M;
            }
        }
    }
    return ans;
}

// Function to compute matrix exponentiation
vector<vector<int>> matpow(vector<vector<int>> a, int exp)
{
    int size = a.size();
    vector<vector<int>> ans(size, vector<int>(size, 0));
    for (int i = 0; i < size; i++)
        ans[i][i] = 1;
    while (exp > 0)
    {
        if (exp & 1)
            ans = multiply(ans, a);
        a = multiply(a, a);
        exp >>= 1;
    }
    return ans;
}

// Function to initialize and calculate matrix exponentiation
vector<vector<int>> calmatpow(int n, int size)
{
    vector<vector<int>> a(size, vector<int>(size, 0));
    for (int i = 0; i < size; i++)
        a[0][i] = 1;
    for (int i = 1; i < size; i++)
        a[i][i - 1] = 1;
    return matpow(a, n);
}
