#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, a[1001][1001], u, vis[1001];

void EC(int u){
    stack<int> st;
    st.push(u);
    vector<int> CE;
    while(!st.empty()){
        int s = st.top();
        int index = 1;
        while(index <= n && !a[s][index])index++;
        if(index <= n){
            int temp = index;
            st.push(temp);
            a[s][index] = a[index][s] = 0;
        }else{
            st.pop();
            CE.pb(s);
        }
    }
    reverse(CE.begin(), CE.end());
    for(int x : CE)cout << x << ' ';
    cout << endl;

}

void Hamilton(int s){
    vector <int> perm;
    for (int i = 1; i <= n; i++) perm.push_back(i);
    do {
        int u = perm[0];
        if (!a[s][u] || perm.back() != s) continue;
        bool bad = 0;
        for (int i = 0; i < n; i++) { 
            if (i < n - 1 && !a[perm[i]][perm[i + 1]]){
                bad = 1;
                break;
            }
            vis[perm[i]] = 1;
        }
        if (bad) continue;
        cout << s;
        for (int i : perm) cout << " " << i;
        cout << endl;
    } while (next_permutation(perm.begin(), perm.end()));
}

int main(){
    quick();
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    cin >> u;
    EC(u);
    Hamilton(u);
}
/*

*/