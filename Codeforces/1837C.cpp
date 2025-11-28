
#include<bits/stdc++.h>
using namespace std;
void solve()
{
   string str; cin >> str;
   char temp= '0';
   for(int i=0;i<str.size();i++){
    if(str[i]=='?') str[i]=temp;
    else temp = str[i];
   }

   cout << str << endl;

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}

