/*#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n, k, d, w; cin >> n >> k >> d >> w;
   int x; cin >> x;
   int peck=1,dose=1,fast_dose=x+d+w;
   for(int i=1;i<n;i++){
        cin >> x;
    if(dose==k){
        fast_dose =x+d+w;
        dose=0;
        peck++;
    }
    if(fast_dose>=x ) dose++;
    else {
        peck++;
        dose=1;
        fast_dose=x+d+w;
    }
   }
   cout<<peck<<endl;

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n, k, d, w; cin >> n >> k >> d >> w;
   vector<int>v;
    int x;
   for(int i=0;i<n;i++) {
        cin >> x;
        v.push_back(x);
   }

   int peck=1,dose=0,fast_dose=v[0]+d+w;
   for(int i=0;i<n;i++){
    if(dose==k){
        fast_dose =v[i]+d+w;
        dose=0;
        peck++;
    }
    if(fast_dose>=v[i] ) dose++;
    else {
        peck++;
        dose=1;
        fast_dose=v[i]+d+w;
    }
   }
   cout<<peck<<endl;

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}




/*#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n, k, d, w; cin >> n >> k >> d >> w;
   int v[n];
   for(int i=0;i<n;i++) cin >> v[i];

   int peck=1,dose=0,fast_dose=v[0]+d+w;
   for(int i=0;i<n;i++){
    if(dose==k){
        fast_dose =v[i]+d+w;
        dose=0;
        peck++;
    }
    if(fast_dose>=v[i] ) dose++;
    else {
        peck++;
        dose=1;
        fast_dose=v[i]+d+w;
    }
   }
   cout<<peck<<endl;

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
*/
