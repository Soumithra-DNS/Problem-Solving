#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 5;
vector<char>status(N + 1, 1);
vector<bool>ans(N + 1, 0);

bool validPrime(int n){
    string s = to_string(n);
    int m = s.size();

    for(int i = 0; i < m - 1; i++){
        for(int j = i + 1; j < m; j++){
            string t = s;
            swap(t[i], t[j]);
            int x = stoi(t);
            if(status[x] == 0){
                return false;
            }
        }
    }

    return true;
}


void siv()
{
    status[1] = 0;
    for(int i = 2; i <= sqrt(N); i++){
        if(status[i] == 1){
            for(int j = i * i; j < N; j += i){
                status[j] = 0;
            }
        }
    }
    for(int i = 1; i < N; i++){
        if(status[i] == 1){
            if(validPrime(i)){
                ans[i] = 1;
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

    int src;
    while(cin >> src && src != 0){
        int x = src, next = 1;
        while(x){
            x /= 10;
            next *= 10;
        }

        for(int i = src + 1; i < next; i++){
            if(ans[i]){
                x = i;
                break;
            }
        }

        cout << x << "\n";
    }

    return 0;
}
