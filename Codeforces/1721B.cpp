#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int n, m, x, y, d;
    cin >> n >> m >> x >> y >> d;
    if((n-x>d && y-1>d)||(m-y>d && x-1>d))
        cout << m+n-2 << endl;
    else
        cout <<"-1"<< endl;

}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       fun();
   }
   return 0;
}
