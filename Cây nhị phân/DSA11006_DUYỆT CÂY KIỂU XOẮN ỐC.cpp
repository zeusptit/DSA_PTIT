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

void buildTree(Tree root, int par, int child, char x){
    if(root != NULL){
        if(root -> val == par){
            if(x == 'L')
                root -> left = createNode(child);
            else
                root -> right = createNode(child);
            return;
        }
        buildTree(root -> left, par, child, x);
        buildTree(root -> right, par, child, x);
    }
}

void spiralOrder(Tree root){
    stack<Tree> st1, st2;
    st1.push(root);
    Tree top;
    while(st1.size() || st2.size(){
        while(st1.size()){
            top = st1.top();
            st1.pop();
            cout << top -> val << ' ';
            if(top -> right != NULL)
                st2.push(top -> right);
            if(top -> left != NULL)
                st2.push(top -> left);
        }
        while(st2.size()){
            top = st2.top();
            st2.pop();
            cout << top -> val << ' ';
            if(top -> left != NULL)
                st1.push(top -> left);
            if(top -> right != NULL)
                st1.push(top -> right);
        }
    }
}

int main(){
    quick();
    int test, n;
    cin >> test;
    int child, par;
    char x;
    while(test--){
        cin >> n;
        Tree root = NULL;
        cin >> par >> child >> x;
        root = createNode(par);
        buildTree(root, par, child, x);
        --n;
        while(n--){
            cin >> par >> child >> x;
            buildTree(root, par, child, x);
        }
        spiralOrder(root);
        cout << endl;
    }
}
/*

*/