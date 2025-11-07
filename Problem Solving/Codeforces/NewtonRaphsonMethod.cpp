#include <bits/stdc++.h>
using namespace std;

class NewtonRaphsonMethod
{
public:
    double value, e;

    double function(double x)
    {
        return pow(x, 3) - 2 * x - 5;
    }

    double inverseFunction(double x)
    {
        return 3 * pow(x, 2) - 2;
    }

    void generateRandomValues()
    {
        srand(time(0));
        value = static_cast<double>(rand()) / RAND_MAX * 2;
        cout << "Initial Value: " << value << endl;
    }

    NewtonRaphsonMethod(double e) : e(e)
    {
        generateRandomValues();
    }

    double findRoot()
    {
        double x = value;
        double h;
        int i = 1;

        do
        {
            h = function(x) / inverseFunction(x);
            x = x - h;
            cout << "Iteration " << i << ", x = " << x << endl;
            i++;
        } while (abs(h) > e);

        return x;
    }
};

int main()
{
    double e;
    cout << "Enter the desired accuracy: ";
    cin >> e;

    NewtonRaphsonMethod newton(e);
    double root = newton.findRoot();
    cout << "The root is: " << root << endl;

    return 0;
}
