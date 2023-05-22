#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n;
string a[150];

struct Node{
    string s;
    Node *left, *right;
};

typedef Node* Tree;

Tree makeNode(string s){
    Tree res = new Node;
    res -> s = s;
    res -> left = res -> right = NULL;
    return res;
}

Tree buildTree(Tree root, int i){
    if(i < n){
        root = makeNode(a[i]);
        root -> left = buildTree(root -> left , i * 2 + 1);
        root -> right = buildTree(root -> right, i * 2 + 2);
    }
    return root;
}

ll solve(Tree root){
    if(root -> s != "+" && root -> s != "-" && root -> s != "*" && root -> s != "/")
        return stoll(root -> s);
    if(root -> s == "+")
        return solve(root -> left) + solve(root -> right);
    else if(root -> s == "-")
        return solve(root -> left) - solve(root -> right);
    else if(root -> s == "*")
        return solve(root -> left) * solve(root -> right);
    else
        return solve(root -> left) / solve(root -> right);
}

int main()
{
    quick();
    int test; cin >> test;
    string s;
    while(test--){
        cin >> n;
        int i = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        Tree x = NULL;
        x = buildTree(x, 0);
        cout << solve(x) << endl;
        delete x;
    }
}
/*

*/