#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool canAchieveUnsavoriness(const vector<int>& A, int K, int maxUnsavoriness) {
    int n = A.size();
    int changes = 0;
    int minTemp = A[0] - maxUnsavoriness, maxTemp = A[0] + maxUnsavoriness;

    for (int i = 1; i < n; i++) {
        int low = A[i] - maxUnsavoriness, high = A[i] + maxUnsavoriness;
        if (low > maxTemp || high < minTemp) {
            changes++;
            minTemp = low;
            maxTemp = high;
        } else {
            minTemp = max(minTemp, low);
            maxTemp = min(maxTemp, high);
        }
    }
    return changes <= K;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int low = 0, high = 1e9, answer = 1e9;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canAchieveUnsavoriness(A, K, mid)) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
