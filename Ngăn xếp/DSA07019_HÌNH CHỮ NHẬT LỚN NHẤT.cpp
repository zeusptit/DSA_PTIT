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
        int n, i = 0; cin >> n;
        int a[n];
        for(int &x : a)cin >> x;
        stack<int> st;
        ll res = 0;
        while(i < n){
            if(!st.size() || a[i] > a[st.top()]){
                st.push(i);
                i++;
            }
            else{
                int x = st.top();
                st.pop();
                if(!st.size()) 
                    res = max(res, (ll) i * a[x]);
                else 
                    res = max(res, (ll)a[x] * (i - st.top() - 1));
            }
        }
        while(st.size()){
            int x = st.top();
            st.pop();
            if(!st.size()) 
                res = max(res, (ll) i * a[x]);
            else 
            res = max(res, (ll)a[x] * (i - st.top() - 1));
        }
        cout << res << endl;
    }
}
/*

*/