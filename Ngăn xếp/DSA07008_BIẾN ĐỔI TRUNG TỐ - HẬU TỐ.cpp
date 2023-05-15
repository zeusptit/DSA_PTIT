#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int uutien(char c){
    if(c == '^')return 3;
    if(c == '*' || c == '/')return 2;
    if(c == '+' || c == '-')return 1;
    return 0;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        stack<char> st;
        string res = "";
        for(char x : s){
            if(isalpha(x)){
                res += x;
            }
            else if (x == '(')st.push('(');
            else if (x == ')'){
                while(!st.empty() && st.top() != '('){
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && uutien(st.top()) >= uutien(x)){
                    res += st.top();
                    st.pop();
                }
                st.push(x);
            }
        }
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        cout << res << endl;
    }
}
/*

*/