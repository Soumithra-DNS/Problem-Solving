template <typename T, typename I = int>
struct BIT
{
    I n;
    vector<T> bit;
    BIT(I n) : n(n) { bit.assign(n + 1, 0); }
    T query(I i)
    {
        T sum = 0;
        for (; i >= 1; i -= (i & -i))
            sum += bit[i];
        return sum;
    }

    void update(I i, T val)
    {
        for (; i <= n; i += (i & -i))
            bit[i] += val;
    }

    void updateRange(I l, I r, T val)
    {
        update(l, val);
        update(r + 1, -val);
    }

    T queryRange(I l, I r)
    {
        return query(r) - query(l - 1);
    }
};
