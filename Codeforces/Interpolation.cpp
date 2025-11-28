#include <iostream>
#include <vector>
using namespace std;

class LagrangeInterpolator {
private:
    vector<double> x, y;

public:
    LagrangeInterpolator(const vector<double>& xVals, const vector<double>& yVals) {
        if (xVals.size() != yVals.size()) {
            cerr << "Error: x and y must have the same number of elements." << endl;
            exit(EXIT_FAILURE);
        }
        x = xVals;
        y = yVals;
    }

    double interpolate(double xi) {
        int n = x.size();
        double result = 0.0;

        for (int i = 0; i < n; i++) {
            double term = y[i];
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    term *= (xi - x[j]) / (x[i] - x[j]);
                }
            }
            result += term;
        }
        return result;
    }
};

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Enter x and y values:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "]: ";
        cin >> x[i];
        cout << "y[" << i << "]: ";
        cin >> y[i];
    }

    double xi;
    cout << "Enter the value of x to interpolate: ";
    cin >> xi;

    LagrangeInterpolator interpolator(x, y);
    double yi = interpolator.interpolate(xi);

    cout.precision(6);
    cout << fixed;
    cout << "The interpolated value at x = " << xi << " is y = " << yi << endl;

    return 0;
}
