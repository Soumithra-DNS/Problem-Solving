template <typename T>
vector<vector<T>> generateSubsets(vector<T> &arr)
{
    int n = arr.size();
    int totalSubsets = 1 << n;
    vector<vector<T>> subsets;

    for (int mask = 0; mask < totalSubsets; mask++)
    {
        vector<T> subset;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                subset.push_back(arr[i]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}