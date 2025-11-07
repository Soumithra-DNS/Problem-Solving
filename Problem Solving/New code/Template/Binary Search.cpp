template <typename T>
int binarySearch(const vector<T> &arr, T key) {
    int l = -1, r = arr.size();
    while (r - l > 1) {
        int m = (l + r) / 2;
        if (key < arr[m]) {
            r = m;
        } else {
            l = m;
        }
    }
    return l;
}
