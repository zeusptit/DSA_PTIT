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

void order(Tree x){
    if(!check)
        return;
    if(x){
        if((x -> left == NULL && x -> right) || (x -> left && x -> right == NULL)){
            check = 0;
            return;
        }
        if(x -> left)
            order(x -> left);
        if(x -> right)
            order(x -> right);
    }
}

int main(){
    quick();
    int test, n, par, child;
    char c;
    cin >> test;
    while(test--){
        cin >> n;
        unordered_map<int, Tree> m;
        cin >> par >> child >> c;
        Tree T = createNode(par);
        m[par] = T;
        if(c == 'L'){
            m[par] -> left = createNode(child);
            m[child] = m[par] -> left;
        }
        else{
            m[par] -> right = createNode(child);
            m[child] = m[par] -> right;
        }
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
        check = 1;
        order(T);
        cout << check << endl;
    }
}
/*

*/