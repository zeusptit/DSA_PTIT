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

Tree makeNode(int x){
    Tree res = new Node;
    res -> val = x;
    res -> left = res -> right = NULL;
    return res;
}

void buildTree(Tree &X, char c, int par, int child){
    if(X != NULL){
        if(X -> val == par){
            if(c == 'L')
                X -> left = makeNode(child);
            else
                X -> right = makeNode(child);
        }
        buildTree(X -> left, c, par, child);
        buildTree(X -> right, c, par, child);
    }
}

void levelOrder(Tree root){
    queue<Tree> q;
    Tree top;
    q.push(root);
    while(q.size())
    {
        top = q.front();
        q.pop();
        cout << top -> val << ' ';
        if(top -> left != NULL)
            q.push(top -> left);
        if(top -> right != NULL)
            q.push(top -> right);
    }
}

int main(){
    quick();
    int test, n; cin >> test;
    while(test--){
        cin >> n;
        Tree root = NULL;
        int par, child;
        char c;
        cin >> par >> child >> c;
        root = makeNode(par);
        buildTree(root, c, par, child);
        --n;
        while(n--){
            cin >> par >> child >> c;
            buildTree(root, c, par, child);
        }
        levelOrder(root);
        cout << endl;
    }
}
/*

*/