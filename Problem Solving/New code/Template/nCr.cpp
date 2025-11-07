int fact[N], invfact[N];
// Precomputes factorials and modular inverses
void precompute()
{
    fact[0] = invfact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = fact[i - 1] * i % M;
    }
    invfact[N - 1] = binExp(fact[N - 1], M - 2, M);
    for (int i = N - 2; i >= 0; i--)
    {
        invfact[i] = invfact[i + 1] * (i + 1) % M;
    }
}
// Computes nCr % M
int nCr(int n, int r)
{
    if (r < 0 || n < 0 || r > n)
        return 0;
    return fact[n] * invfact[r] % M * invfact[n - r] % M;
}