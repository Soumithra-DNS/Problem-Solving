#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n; cin >> n;
   int l, r, m, f, g=500001, h=500001, j=500001;
   while(n--)
   {
       cin >> m >> f;
       r=f%10;
       f=f/10;
       l=f%10;

       if(l==r && r==1)
       {
           if(g>m)
            g=m;
       }
       else if(l==1)
       {
           if(h>m)
            h=m;
       }
       else if(r==1)
       {
           if(j>m)
            j=m;
       }
   }
   if(g==500001 && (h==500001 || j==500001))
    cout<<"-1"<<endl;
   else
   {
       if(g>h+j)
        g=h+j;
       cout<< g << endl;
   }
}

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
