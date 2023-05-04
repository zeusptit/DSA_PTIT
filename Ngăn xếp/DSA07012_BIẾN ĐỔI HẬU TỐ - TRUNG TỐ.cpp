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
        stack<string> st;
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i])){
                string temp = "";
                temp += s[i];
                st.push(temp);
            }
            else{
                string temp = "";
                string top1 = st.top(); st.pop();
                string top2 = st.top(); st.pop();
                temp = "(" + top2 + s[i] + top1 + ")";
                st.push(temp);
            }
        }
        cout << st.top() << endl;
    }
}
/*

*/