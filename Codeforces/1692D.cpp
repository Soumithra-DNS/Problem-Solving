#include<bits/stdc++.h>
using namespace std;
void sdns()
{
    int HH, MM, x;
    char c;
    cin >> HH >> c >> MM >> x;
    int h=HH, m=MM, ct=0;
    while(true){
        h+=x/60;
        m+=x%60;
        if(m>59){
            m%=60;
            h++;
        }
        if(h>23) h-=24;

        if(h%10==m/10 && h/10==m%10) ct++;
        if(h==HH && m==MM) break;
    }
    cout<< ct << endl;

}

int main()
{
    int t; cin >> t;
    while(t--){
        sdns();
    }
    return 0;
}
