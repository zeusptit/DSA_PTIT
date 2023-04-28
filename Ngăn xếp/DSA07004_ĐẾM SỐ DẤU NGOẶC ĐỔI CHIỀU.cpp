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
        int cnt = 0;
        while(s.length()){
            int x = s.find("()");
            if(x == - 1){
                if(s[0] == ')'){
                    s[0] = '(';
                    cnt++;
                }
                if(s[s.length() - 1] == '('){
                    s[s.length() - 1] = ')';
                    cnt++;
                }
            }else
                s.erase(x, 2);
        }
        cout << cnt << endl;
    }
}
/*

*/