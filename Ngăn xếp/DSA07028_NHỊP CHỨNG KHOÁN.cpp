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
        int a[n + 1], b[n + 1];
        stack<int> st;
        for(int i = 1; i <= n; i++)cin >> a[i];
        for(int i = 1; i <= n; i++){
            while(st.size() && a[i] >= a[st.top()])st.pop();
            if(st.empty())
                b[i] = 0;
            else
                b[i] = st.top();
            st.push(i);
        }
        for(int i = 1; i <= n; i++)
            cout << i - b[i] << ' ';
        cout << endl;
    }
}
/*

*/