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

void buildTree(Tree &root, int par, char c, int child){
    if(root == NULL)
        return;
    if(par == root -> val){
        if(c == 'L')
            root -> left = createNode(child);
        else
            root -> right = createNode(child);
    }
    buildTree(root -> left, par, c, child);
    buildTree(root -> right, par, c, child);
}

bool check;

void order(Tree root1, Tree root2){
    if(!check || root1 == NULL || root2 == NULL)
        return;
    if(root1 -> val != root2 -> val){
        check = 0;
        return;
    }
    if((root1 -> left == NULL && root2 -> left != NULL) || (root1 -> right == NULL && root2 -> right != NULL)){
        check = 0;
        return;
    }
    order(root1 -> left, root2 -> left);
    order(root1 -> right, root2 -> right);
}

int main(){
    quick();
    int test, n, par, child, ori;
    char c;
    string s;
    cin >> test;
    while(test--){
        cin >> n;
        ori = n;
        Tree root1, root2;
        cin >> par >> child >> c;
        root1 = createNode(par);
        buildTree(root1, par, c, child);
        --n;
        while(n--){
            cin >> par >> child >> c;
            buildTree(root1, par, c, child);
        }
        check = 1;
        cin >> n;
        if(n != ori){
            cin.ignore();
            getline(cin, s);
            cout << 0 << endl;
            continue;
        }
        cin >> par >> child >> c;
        root2 = createNode(par);
        buildTree(root2, par, c, child);
        --n;
        while(n--){
            cin >> par >> child >> c;
            buildTree(root2, par, c, child);
        }
        order(root1, root2);
        cout << check << endl;
    }
}

/*

*/