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
        int n; cin >> n;
        int a[n], res[n];
        for(int &x : a)cin >> x;
        stack<int> st;
        res[n - 1] = -1;
        st.push(a[n - 1]);
        for(int i = n - 2; i >= 0; i--){
            if(st.size() && a[i] < st.top()){
                res[i] = st.top();
                st.push(a[i]);
            }else{
                while(st.size() && a[i] >= st.top())st.pop();
                if(st.size())res[i] = st.top();
                else res[i] = -1;
                st.push(a[i]);
            }
        }
        for(int x : res)cout << x << ' ';
        cout << endl;
    }
}
/*

*/