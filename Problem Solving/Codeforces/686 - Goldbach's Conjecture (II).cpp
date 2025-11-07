#include <bits/stdc++.h>
using namespace std;

const int N = pow(2,15) + 5;
vector<bool>status(N, false);
vector<int>prime;
map<int, int> mp;
void siv(){
    for(int i = 2; i < N; i++){
        if(status[i] == false){
            prime.push_back(i);
            for(int j = i * i; j < N; j += i){
                status[j] = true;
            }
        }
    }
    int n = prime.size();
    // cout << n ;
    // for(auto i : prime)
    // cout << i << " ";
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(prime[i] + prime[j] < N){
                mp[prime[i] + prime[j]]++;
            }else{
                break;
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    siv();
    //cout << mp.size();
    
    int ind;
    while(cin >> ind && ind != 0){
        cout << mp[ind] << "\n";
    }
    return 0;
}
