#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int test; cin >> test;
    cin.ignore();
    while(test--){
        string s; getline(cin, s);
        stringstream ss(s);
        string temp;
        stack<string> st;
        while(ss >> temp){
            st.push(temp);
        }
        while(!st.empty()){
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
}
/*

*/