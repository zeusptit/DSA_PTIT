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
        stack<char> st;
        for(char x : s){
            if(x == ')'){
                string temp = "";
                while(st.size() && st.top() != '('){
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop();
                char t;
                if(st.size())
                    t = st.top();   
                for(int i = 0; i < temp.length(); i++){
                    if(t == '-' && st.size()){
                        if(temp[i] == '+')
                            st.push('-');
                        else if(temp[i] == '-')
                            st.push('+');
                        else
                            st.push(temp[i]);
                    }
                    else
                        st.push(temp[i]);
                }
            }
            else
                st.push(x);
        }
        string res = "";
        while(st.size()){
            res = st.top() + res;
            st.pop();
        }
        cout << res << endl;
    }
}
/*

*/