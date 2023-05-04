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
        for(int x : s){
            if(x == '(' || x == '[' || x == '{')
                st.push(x);
            else if(!st.empty())
                if((x == ')' && st.top() == '(') || (x == ']' && st.top() == '[') || (x == '}' && st.top() == '{'))
                    st.pop();
        }
        if(st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
/*

*/