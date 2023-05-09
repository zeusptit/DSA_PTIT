#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int check(string s, string v){
    int i = 0, j = 0;
    while(i < s.length() && j < v.length()){
        if(s[i] == v[j]){
            i++; j++;
        }
        else i++;
    }
    return j == v.length();
}
int main(){
    quick();
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        int kt = 0;
        ll res;
        for(int i = 1; i <= 100; i++){
            ll temp = i * i * i;
            if(check(s, to_string(temp))){
                res = temp;
                kt = 1;
            }
        }
        if(!kt)
            cout << -1 << endl;
        else 
            cout << res << endl;
    }
}
/*

*/