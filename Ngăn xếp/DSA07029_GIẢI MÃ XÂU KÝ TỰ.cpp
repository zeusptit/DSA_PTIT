#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

string solve(string s){
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ']')
            st.push(s[i]);
        else{
            string temp;
            while(st.size() && st.top() != '['){
                temp = st.top() + temp;
                st.pop();
            }
            st.pop();
            string number;
            while(st.size() && isdigit(st.top())){
                number = st.top() + number;
                st.pop();
            }
            int num = 1;
            if(number.size())num = stoi(number);
            string x = "";
            for(int j = 1; j <= num; j++)x += temp;
            for(int j = 0; j < x.length(); j++)st.push(x[j]);
        }
    }
    string res = "";
    while(!st.empty()){
        res = st.top() + res;
        st.pop();
    }
    return res;
}
int main(){
    quick();
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        cout << solve(s) << endl;
    }
}
/*

*/