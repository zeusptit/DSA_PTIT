#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int a[1005];

struct Node{
    int val;
    Node *left, *right;
};

typedef Node* Tree;

Tree createNode(int val){
    Tree res = new Node;
    res -> val = val;
    res -> left = res -> right = NULL;
    return res;
}

Tree buildTree(int l, int r){
    if(l > r)
        return NULL;
    int mid = (l + r) >> 1;
    Tree res = createNode(a[mid]);
    res -> left = buildTree(l, mid - 1);
    res -> right = buildTree(mid + 1, r);
    return res;
}

int cnt;

void order(Tree x){
    if(x){
        if(x -> left || x -> right){
            if(x -> left)
                order(x -> left);
            if(x -> right)
                order(x -> right);
        }
        else
            ++cnt;
    }
}

int main(){
    quick();
    int test, n;
    cin >> test;
    while(test--){
        cin >> n;
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        Tree T = buildTree(0, n - 1);
        cnt = 0;
        order(T);
        cout << cnt << endl;
    }
}
/*

*/