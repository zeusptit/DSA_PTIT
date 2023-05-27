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

bool check;
ll sum;

bool isLeaf(Tree root){
    return root -> left == root -> right && root -> left == NULL;
}

void calc(Tree root){
    if(root == NULL)
        return;
    if(root -> right != NULL && isLeaf(root -> right))
        sum += root -> right -> val;
    if(root -> right != NULL && !isLeaf(root -> right))
        calc(root -> right);
    if(root -> left != NULL && !isLeaf(root -> left))
        calc(root -> left);
}

int main(){
    quick();
    int test, n, par, child, ori;
    char c;
    cin >> test;
    while(test--){
        cin >> n;
        ori = n;
        Tree root;
        unordered_map<int, Tree> m;
        cin >> par >> child >> c;
        root = createNode(par);
        if(c == 'L'){
            root -> left = createNode(child);
            m[child] = root -> left;
        }
        else{
            root -> right = createNode(child);
            m[child] = root -> right;
        }
        m[par] = root;
        --n;
        while(n--){
            cin >> par >> child >> c;
            if(c == 'L'){
                m[par] -> left = createNode(child);
                m[child] = m[par] -> left;
            }
            else{
                m[par] -> right = createNode(child);
                m[child] = m[par] -> right;
            }
        }
        sum = 0;
        calc(root);
        cout << sum << endl;
        free(root);
    }
}
/*

*/