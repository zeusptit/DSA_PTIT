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
        for(int i = s.length() - 1; i >= 0; i--){
            if(isalpha(s[i])){
                string temp = "";
                temp += s[i];
                st.push(temp);
            }
            else{
                string temp = "";
                temp += st.top(); st.pop();
                temp += st.top(); st.pop();
                temp += s[i];
                st.push(temp);
            }
        }
        cout << st.top() << endl;
    }
}
/*

*/