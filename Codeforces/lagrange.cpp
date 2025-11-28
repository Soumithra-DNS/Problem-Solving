#include <bits/stdc++.h>
using namespace std;
class lagrag {
private:
    vector<double> x, y;
public:
    lagrag(vector<double> X, vector<double> Y) {
        this->x = X;
        this->y = Y;
    }

    double LI(int i, double xx) {
        double val = 1.0;
        int n = x.size();
        for (int j = 0; j < n; j++) {
            if (j != i) {
                val *= (xx - x[j]) / (x[i] - x[j]);
            }
        }
        return val;
    }

    double root(double xx) {
        double val = 0.0;
        for (int i = 0; i <x.size(); i++) {
            val += y[i]* LI(i, xx);
        }
        return val;
    }
};

int main() {
    vector<double> X = {2, 2.5, 3};
    vector<double> Y = {0.69315,0.91629,1.09861};
    lagrag lgrg(X, Y);
    double x=2.7;
    double val = lgrg.root(x);

    cout << "value x = " << x << " is: " << val << endl;

    return 0;
}