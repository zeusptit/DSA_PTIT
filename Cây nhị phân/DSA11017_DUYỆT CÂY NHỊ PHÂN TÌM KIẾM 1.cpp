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

Tree createNode(int val){
    Tree res = new Node;
    res -> val = val;
    res -> left = res -> right = NULL;
    return res;
}

void buildTree(Tree &x, int val){
    if(x == NULL){
        x = createNode(val);
        return;
    }
    if(x -> val > val)
        buildTree(x -> left, val);
    else
        buildTree(x -> right, val);
}

void order(Tree x){
    if(x -> left)
        order(x -> left);
    if(x -> right)
        order(x -> right);
    cout << x -> val << ' ';
}

int main(){
    quick();
    int test, n, val;
    cin >> test;
    while(test--){
        cin >> n;
        Tree T = NULL;
        while(n--){
            cin >> val;
            buildTree(T, val);
        }
        order(T);
        cout << endl;
    }
}
/*

*/