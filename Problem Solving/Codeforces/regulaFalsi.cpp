#include <bits/stdc++.h>
using namespace std;
#define M 1000000
class regula
{
public:
    double a, b;
    double f(double x)
    {
        return x * x - 2 * x - 5;
    }
    void randomgeneration()
    {
        srand((int)time(0));
        while (f(a) * f(b) >= 0)
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
    void regulaFalsi()
    {
        if (f(a) * f(b) >= 0)
        {
            cout << "Wrong guess\n";
            return;
        }

        double c = a;
        for (int i = 0; i < M; i++)
        {

            c = (a * f(b) - b * f(a)) / (f(b) - f(a));

            if (f(c) == 0)
                break;

            else if (f(c) * f(a) < 0)
                b = c;
            else
                a = c;
        }
        cout << "The value of root is : " << c;
    }
};

int main()
{
    regula objfalsi;
    objfalsi.randomgeneration();
    objfalsi.regulaFalsi();
}