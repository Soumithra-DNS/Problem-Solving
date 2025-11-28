#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int cycleSum = a + b + c;
        int fullCycles = n / cycleSum;
        int sum = fullCycles * cycleSum;

        int additionalSteps = 0;

        if (sum < n)
        {
            sum += a;
            additionalSteps++;
        }

        if (sum < n)
        {
            sum += b;
            additionalSteps++;
        }

        if (sum < n)
        {
            sum += c;
            additionalSteps++;
        }

        cout << fullCycles * 3 + additionalSteps << "\n";
    }
    return 0;
}