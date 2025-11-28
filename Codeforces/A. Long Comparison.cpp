#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int x, a, y, b, m;
        cin >> x >> a >> y >> b;
        if(a>b){
                a=a-b;
                m=pow(10,a);
                x= (x * m);
        }
        else if(a<b){
            b=b-a;
            m=pow(10, b);
            y=(y * m);

        }

        if(x==y)
            cout << "=" << endl;
        else if(x<y)
            cout << "<" << endl;
        else if(x>y)
            cout << ">" << endl;

    }
    return 0;
}
