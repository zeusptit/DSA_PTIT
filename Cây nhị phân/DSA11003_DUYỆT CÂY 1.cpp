#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int pos = 0;

void solve(int inorder[], int preorder[], int l, int r, unordered_map<int, int> &ump){
    if(l <= r){
        int idx = ump[preorder[pos++]];
        solve(inorder, preorder, l, idx - 1, ump);
        solve(inorder, preorder, idx + 1, r, ump);
        cout << inorder[idx] << ' ';
    }
}

int main(){
    quick();
    int test, n; cin >> t;
    while(test--){
        cin >> n;
        int inorder[n], preorder[n];
        for(int &x : inorder) cin >> x;
        for(int &x : preorder) cin >> x;
        unordered_map<int, int> ump;
        for (int i = 0; i < n; ++i)
            ump[inorder[i]] = i;
        pos = 0;
        solve(inorder, preorder, 0, n - 1, ump);
        cout << endl;
    }
}
/*

*/