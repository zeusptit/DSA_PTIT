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
    if(x == NULL)
        x = createNode(val);
    else{
        if(x -> val > val)
            buildTree(x -> left, val);
        else
            buildTree(x -> right, val);
    }
}

int max_val = -1;

void order(Tree x, int lv = 0){
    if(x){
        if(x -> left == NULL && x -> right == NULL)
            max_val = max(MAX, lv);
        else{
            if(x -> left)
                order(x -> left, lv + 1);
            if(x -> right)
                order(x -> right, lv + 1);
        }
    }
}

int main(){
    quick();
    int test, n, x;
    cin >> test;
    while(test--){
        cin >> n;
        Tree T = NULL;
        while(n--){
            cin >> x;
            buildTree(T, x);
        }
        max_val = -1;
        order(T);
        cout << MAX;
        cout << endl;
    }
}
/*

*/