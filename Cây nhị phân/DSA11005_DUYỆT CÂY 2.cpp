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

Tree buildTree(int n, int *inorder, int *levelOrder, int start, int end){
    if(n > 0){
        Tree root = makeNode(levelOrder[0]);
        int idx = -1;
        unordered_map<int, int> ump;
        for(int i = start; i <= end; ++i){
            if(inorder[i] == levelOrder[0]){
                idx = i;
                break;
            }
            ump[inorder[i]]++;
        }
        int L[ump.size()], R[end - start - ump.size()], l, r;
        l = r = 0;
        for(int i = 1; i < n; ++i){
            if(ump[levelOrder[i]])
                L[l++] = levelOrder[i];
            else
                R[r++] = levelOrder[i];
        }
        root -> left = buildTree(idx - start, inorder, L, start, idx - 1);
        root -> right = buildTree(end - idx, inorder, R, idx + 1, end);
        return root;
    }
    return NULL;
}

void postOrder(Tree root){
    if(root -> left != NULL)
        postOrder(root -> left);
    if(root -> right != NULL)
        postOrder(root -> right);
    cout << root -> val << ' ';
}

int main(){
    quick();
    int test, n;
    cin >> test;
    while(test--){
        cin >> n;
        int inorder[n], levelOrder[n];
        for(int &x : inorder)cin >> x;
        for(int &x : levelOrder)cin >> x;
        Tree root = buildTree(n, inorder, levelOrder, 0, n - 1);
        postOrder(root);
        cout << endl;
    }
}
/*

*/