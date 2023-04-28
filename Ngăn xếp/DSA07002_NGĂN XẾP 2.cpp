#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int x;
    string s;
    stack<int> st;
    int test; cin >> test;
    while(test--){
        cin >> s;
        if(s == "PUSH"){
            cin >> x;
            st.push(x);
        }else if(s == "POP"){
            if(st.size() > 0)
                st.pop();
        }
        else{
            if(st.empty())
                cout << "NONE" << endl;
            else
                cout << st.top() << endl;
        }
    }
}
/*

*/