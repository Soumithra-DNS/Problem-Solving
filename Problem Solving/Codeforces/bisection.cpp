#include <bits/stdc++.h>
using namespace std;

class Bisection
{
public:
    double a, b;
    double tolerance = 0.001;
    double function(double x)
    {
        return x * x * x - 2 * x * x + 5 * x;
    }
    void randomgeneration()
    {
        srand((int)time(0));
        while (function(a) * function(b) >= 0)
        {
            a = static_cast<double>(rand() % 1000) - 500;
            b = static_cast<double>(rand() % 1000) - 500;
            if (a > b)
            {
                swap(a, b);
            }
        }

        cout << a << " " << b << " \n";
    }

public:
    void bisection()
    {
        if (function(a) * function(b) >= 0)
        {
            cout << "Wrong Guess\n";
            return;
        }
        double c = 0;
        while ((b - a) >= tolerance)
        {
            c = (a + b) / 2;
            if (function(c) == 0)
            {
                break;
            }
            else if (function(c) * function(b) < 0)
            {
                a = c;
            }
            else
                b = c;
        }
        cout << "The root is " << c << "\n";
    }
};

int main()
{

    Bisection objbisection;
    objbisection.randomgeneration();
    objbisection.bisection();
}