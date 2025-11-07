#include <bits/stdc++.h>
using namespace std;

class SecantMethod
{
private:
    double tol;
    int maxIt;

    double func(double x)
    {
        // return x * x * x - 4 * x - 9;
        return x * sin(x) + cos(x);
    }

public:
    SecantMethod(double tol, int maxIt) : tol(tol), maxIt(maxIt) {}

    double findRoot(double x0, double x1)
    {
        for (int i = 0; i < maxIt; i++)
        {
            double f_x0 = func(x0);
            double f_x1 = func(x1);

            double x2 = x1 - f_x1 * (x1 - x0) / (f_x1 - f_x0);
            cout << "Iteration " << i + 1 << ": x = " << x2 << "\n";

            if (fabs(x2 - x1) < tol)
            {
                return x2;
            }

            x0 = x1;
            x1 = x2;
        }
        return x1;
    }
};

int main()
{
    double tol = 1e-6, x0 = -2.0, x1 = 3.0;
    int maxIt = 100;

    SecantMethod secantMethod(tol, maxIt);

    double root = secantMethod.findRoot(x0, x1);

    cout << "Root: " << root << "\n";

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

class SecantMethod
{
private:
    double tol;
    int maxIt;
    double a, b;

    double func(double x)
    {
        return x * sin(x) + cos(x);
    }

    // void gen()
    // {
    //     srand(time(0));
    //     do
    //     {
    //         a = static_cast<double>(rand()) / RAND_MAX * 6 - 3;
    //         b = static_cast<double>(rand()) / RAND_MAX * 6 - 3;
    //     } while (func(a) * func(b) >= 0);

    //     if (func(a) < 0)
    //         swap(a, b);
    //     cout << "Initial guesses: a = " << a << ", b = " << b << endl;
    // }

    void gen()
    {
        srand(time(0));
        do{
        a = (rand() % 1001) - 500;
        b = (rand() % 1001) - 500;
        }while(func(a) * func(b) >= 0);

        if (a > b)
            swap(a, b);
    }

public:
    SecantMethod(double tol, int maxIt) : tol(tol), maxIt(maxIt)
    {
        gen();
    }

    double findRoot()
    {
        double x0 = a, x1 = b;
        for (int i = 0; i < maxIt; i++)
        {
            double f_x0 = func(x0);
            double f_x1 = func(x1);

            if (fabs(f_x1 - f_x0) < 1e-9)
            {
                cout << "Division by zero error.\n";
                return NAN;
            }

            double x2 = x1 - f_x1 * (x1 - x0) / (f_x1 - f_x0);
            cout << "Iteration " << i + 1 << ": x = " << x2 << "\n";

            if (fabs(x2 - x1) < tol)
                return x2;

            x0 = x1;
            x1 = x2;
        }
        return x1;
    }
};

int main()
{
    double tol = 1e-6;
    int maxIt = 100;

    SecantMethod secantMethod(tol, maxIt);
    double root = secantMethod.findRoot();

    cout << "Approximate Root: " << fixed << setprecision(6) << root << "\n";

    return 0;
}

*/