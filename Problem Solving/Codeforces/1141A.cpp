#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long int n,m;
    cin >> n >> m;
    if(m%n!=0)
        cout <<"-1" << endl;
    else
    {
      int z=m/n;
      int a=0;
      while(z%2==0)
      {
          z=z/2;
          a++;
      }
      while(z%3==0)
      {
          z=z/3;
          a++;
      }
      if(z!=1)
        cout<<"-1"<< endl;
      else
        cout << a << endl;
    }
    return 0;
}
