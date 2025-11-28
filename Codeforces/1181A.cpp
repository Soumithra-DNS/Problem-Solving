#include<bits/stdc++.h>>
using namespace std;
int main()
{
   long long int x, y, z, a, b, c;
    cin >> x >> y >> z;
    a=(x+y)/z;
    c=x/z + y/z;
    if(c<a){
     b=min(z-(x%z),z-(y%z));
    }
    else
        b=0;

    cout << a<<" "<< b;


    return 0;
}
