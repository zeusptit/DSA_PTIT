#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        int d[256] = {0};
        for(char x : s)d[x]++;
        int max_freq = 0, sum = s.length(), kt = 0;
        for(char x : s){
            max_freq = max(max_freq, d[x]);
        }
        if(max_freq * 2 - sum > 1){
            cout << -1 << endl;
            kt = 1;
            continue;
        }
        if(!kt)cout << 1 << endl;
    }
}
/*

*/