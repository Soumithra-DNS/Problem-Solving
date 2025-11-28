#include <bits/stdc++.h>
using namespace std;

class Simpsons
{
private:
    vector<double> y, x;
    int n;
    double a, b, h;

    double function(double x)
    {
        // Example: 1 / (1 + x^2)
        return 1.0 / (1 + x * x);
    }

public:
    Simpsons(double l, double r, int size)
    {
        n = size, a = l, b = r;
        y.resize(n + 1);
        x.resize(n + 1);
        h = (b - a) / (1.0 * n);

        x[0] = l;
        y[0] = function(x[0]);
        for (int i = 1; i <= n; i++)
        {
            x[i] = x[i - 1] + h;
            y[i] = function(x[i]);
        }
    }

    void simpsons_1_3()
    {
        if (n % 2 == 1)
        { // n must be even
            cout << "This rule doesn't apply!\n";
            return;
        }
        double area = y[0] + y[n];
        double odd = 0.0, even = 0.0;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 1)
                odd += y[i];
            else
                even += y[i];
        }
        area += 4.0 * odd;
        area += 2.0 * even;
        area *= h / 3.0;
        cout << "Approximate Integral using Simpson's 1/3: " << area << endl;
    }

    void simpsons_3_8()
    {
        if (n % 3 != 0)
        { // n must be a multiple of 3
            cout << "This rule doesn't apply!\n";
            return;
        }
        double area = y[0] + y[n];
        double multi3 = 0.0, other = 0.0;
        for (int i = 1; i < n; i++)
        {
            if (i % 3 == 0)
                multi3 += y[i];
            else
                other += y[i];
        }
        area += 3.0 * other;
        area += 2.0 * multi3;
        area *= (3.0 * h) / 8.0;
        cout << "Approximate Integral using Simpson's 3/8: " << area << endl;
    }
};

int main()
{
    int n;
    double a, b;
    cin >> a >> b >> n;

    Simpsons simp(a, b, n);
    simp.simpsons_1_3();
    simp.simpsons_3_8();
}

/*
Input 1:
a = 0, b = 1, n = 6
Equation: 1 / (1 + x^2)

Output 1:
Approximate Integral using Simpson's 1/3: 0.7842
Approximate Integral using Simpson's 3/8: 0.7844

Input 2:
a = 1, b = 2, n = 3
Equation: 1 / x

Output 2:
Approximate Integral using Simpson's 1/3: 0.70
Approximate Integral using Simpson's 3/8: 0.705
*/
