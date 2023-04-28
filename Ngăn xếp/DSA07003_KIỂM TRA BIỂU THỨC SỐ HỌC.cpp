#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

string check(string s){
    stack<char> st;
    for(char x : s){
        if(x == ')'){
            int kt = 1;
            while(st.top() != '('){
                char temp = st.top();
                if(temp == '+' || temp == '-' || temp == '*' || temp == '/')kt = 0;
                st.pop();
            }
            if(kt)return "Yes";
            st.pop();
        }
        else st.push(x);
    }
    return "No";
}
int main(){
    quick();
    int test; cin >> test;
    cin.ignore();
    while(test--){
        string s; getline(cin, s);
        cout << check(s) << endl;
    }
}
/*

*/