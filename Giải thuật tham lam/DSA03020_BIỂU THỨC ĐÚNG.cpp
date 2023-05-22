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
        int open = 0, close = 0, res = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '[') open++;
            else close++;
            if(close > open){
                for(int j = i + 1; j < s.length(); j++){
                    if(s[j] != s[i]){
                        res += j - i;
                        open++; close--;
                        swap(s[i], s[j]);
                        break;
                    }
                }
            }
        }
        cout << res << endl;
    }
}
/*

*/