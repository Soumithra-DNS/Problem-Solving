#include<bits/stdc++.h>
using namespace std;
void solve()
{
   string s="codeforces";
   string x; cin >> x;
   int z=0;
   for(int i=0;i<10;i++)
   {
       if(s[i]!=x[i])
        z++;
   }

   cout << z << endl;
}

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}


