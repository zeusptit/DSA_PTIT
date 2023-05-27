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

inline Tree createNode(int x){
    Tree res = new Node;
    res -> val = x;
    res -> left = res -> right = NULL;
    return res;
}

void buildTree(Tree &A, char c, int par, int child)
{
    if(A != NULL)
    {
        if(A -> val == par)
        {
            if(c == 'L')
                A -> left = createNode(child);
            else
                A -> right = createNode(child);
        }
        buildTree(A -> left, c, par, child);
        buildTree(A -> right, c, par, child);
    }
}

int levelOrder(Tree root){
    int max_val = -1;
    queue<pair<Tree, int>> q;
    pair<Tree, int> top;
    q.push({root, 0});
    while(q.size()){
        top = q.front();
        q.pop();
        if(top.first -> left == NULL){
            if(max_val == -1)
                max_val = top.second;
            else if(top.second != max_val)
                return 0;
        }
        else
            q.push({top.first -> left, top.second + 1});
        if(top.first -> right == NULL){
            if(max_val == -1)
                max_val = top.second;
            else if(top.second != max_val)
                return 0;
        }
        else
            q.push({top.first -> right, top.second + 1});
    }
    return 1;
}

int main(){
    quick();
    int test , n;
    cin >> test;
    while(test--){
        cin >> n;
        Tree root = NULL;
        int par, child;
        char c;
        cin >> par >> child >> c;
        root = createNode(par);
        buildTree(root, c, par, child);
        --n;
        while(n--)
        {
            cin >> par >> child >> c;
            buildTree(root, c, par, child);
        }
        cout << levelOrder(root) << endl;
    }
}
/*

*/