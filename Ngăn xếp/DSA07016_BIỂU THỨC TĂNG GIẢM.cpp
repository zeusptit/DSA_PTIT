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
        stack<int> st;
        string ans = "";
        for(int i = 0; i <= s.length(); i++){
            st.push(i + 1);
            if(i == s.length() || s[i] == 'I'){
                while(!st.empty()){
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << ans << endl;
    }
}
/*

*/