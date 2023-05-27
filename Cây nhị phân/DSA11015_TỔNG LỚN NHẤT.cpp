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

void buildTree(Tree &T, int par, int child, char c)
{
    if(T){
        if(T -> val == par){
            if(c == 'L')
                T -> left = createNode(child);
            else
                T -> right = createNode(child);
            return;
        }
        else{
            buildTree(T -> left, par, child, c);
            buildTree(T -> right, par, child, c);
        }
    }
}

int max_val;

int findMax(Tree x){
    if(x == NULL)
        return 0;
    int L = findMax(x -> left), R = findMax(x -> right);
    if(x -> left == NULL && x -> right == NULL)
        return x -> val;
    if(x -> left == NULL)
        return R + x -> val;
    if(x -> right == NULL)
        return L + x -> val;
    max_val = max(max_val, L + R + x -> val);
    return max(L, R) + x -> val;
}

int main(){
    quick();
    int test, n, par, child;
    char c;
    cin >> test;
    while(test--){
        cin >> n;
        Tree T = NULL;
        cin >> par >> child >> c;
        T = createNode(par);
        buildTree(T, par, child, c);
        while(--n){
            cin >> par >> child >> c;
            buildTree(T, par, child, c);
        }
        max_val = -1e9;
        findMax(T);
        cout << max_val << endl;
    }
}
/*

*/