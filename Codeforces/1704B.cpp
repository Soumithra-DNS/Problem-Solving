#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;

    int ct=0;
    if(n==1){
       cout<<ct<<endl;
       return;
    }
    int ele; cin >> ele;
    int l=ele, h=ele;

    for(int i=1;i<n;i++){
            cin >> ele;
        if((abs(ele-l)>2*x) || ((h-ele)>2*x) ||((ele-l)>2*x)){
            ct++;
            l=ele;
            h=ele;
        }else{
            l=min(l,ele);
            h=max(h,ele);
        }

    }
    cout<<ct<<endl;

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
