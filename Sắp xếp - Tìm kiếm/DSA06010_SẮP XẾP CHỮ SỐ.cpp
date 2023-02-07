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
        set<int> st;
        for(int i = 0; i < n; i++){
            string x; cin >> x;
            for(char i : x)st.insert(i - '0');
        }
        for(int x : st)cout << x << ' ';
        cout << endl;
    }
}
/*

*/