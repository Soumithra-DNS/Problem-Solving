#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int F=(s*v1)+(t1*2);
    int S=(s*v2)+(t2*2);
    if(F==S)
        cout <<"Friendship";
    else if(F<S)
        cout <<"First";
    else
        cout << "Second";

    return 0;
}
