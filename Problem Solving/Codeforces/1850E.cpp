#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        unsigned long long n, c, ans, x;
        cin >> n >> c;
        unsigned long long area = 0, peri = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            area += (x * x);
            peri += x;
        }

        unsigned long long temp=sqrt((peri/n)*(peri/n)+(c-area)/n)/2;
		cout<<temp-peri/(n*2)<<endl;
        
    }
}
