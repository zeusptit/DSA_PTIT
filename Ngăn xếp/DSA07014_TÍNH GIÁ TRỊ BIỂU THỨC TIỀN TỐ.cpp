#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int solve(int a, int b, char c){
    if(c == '*')return a * b;
    if(c == '+')return a + b;
    if(c == '-')return a - b;
    if(c == '/')return a / b;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        stack<int> st;
        for(int i = s.length() - 1; i >= 0; i--){
            if(isdigit(s[i]))
                st.push(s[i] - '0');
            else{
                int top1 = st.top(); st.pop();
                int top2 = st.top(); st.pop();
                int temp = solve(top1, top2, s[i]);
                st.push(temp);
            }
        }
        cout << st.top() << endl;
    }
}
/*

*/