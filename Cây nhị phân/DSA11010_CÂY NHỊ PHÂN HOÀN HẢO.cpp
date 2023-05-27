#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

struct Node{
    int val;
    Node *left, *right;
};

typedef Node* Tree;

Tree createNode(int x){
    Tree res = new Node;
    res -> val = x;
    res -> left = res -> right = NULL;
    return res;
}

void buildTree(Tree &root, int par, char c, int val){
    if(root == NULL)
        return;
    if(root -> val == par){
        if(c == 'L')
            root -> left = createNode(val);
        else
            root -> right = createNode(val);
        return;
    }
    else{
        buildTree(root -> left, par, c, val);
        buildTree(root -> right, par, c, val);
    }
}

int Level[1005];
int a[35];

void order(Tree root, int lv = 0){
    if(root == NULL)
        return;
    ++Level[lv];
    order(root -> left, lv + 1);
    order(root -> right, lv + 1);
}

string check(){
    for(int i = 0; i <= 30; ++i){
        if(Level[i] == 0)
            return "Yes";
        if(Level[i] != a[i])
            return "No";
    }
    return "Yes";
}

int main(){
    quick();
    int test, par, child, n;
    for(int i = 0; i <= 30; ++i)
        a[i] = 1 << i;
    char c;
    cin >> test;
    while(test--){
        memset(Level, 0, sizeof(Level));
        cin >> n;
        Tree root;
        cin >> par >> child >> c;
        root = createNode(par);
        buildTree(root, par, c, child);
        --n;
        while(n--){
            cin >> par >> child >> c;
            buildTree(root, par, c, child);
        }
        order(root);
        cout << check() << endl;
    }
}
/*

*/