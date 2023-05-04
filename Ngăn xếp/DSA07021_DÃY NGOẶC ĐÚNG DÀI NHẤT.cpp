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
        st.push(-1);
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(')
                st.push(i);
            else{
                st.pop();
                if(st.size())
                    ans = max(ans, i - st.top());
                if(st.empty())
                    st.push(i);
            }
        }
        cout << ans << endl;
    }
}
/*

*/