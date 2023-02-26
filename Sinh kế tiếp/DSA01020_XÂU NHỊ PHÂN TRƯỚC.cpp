#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

vector<int> X;

void in(){
    string s; cin >> s;
    for(char x : s)X.pb(x - '0');
}

void prev(){
    int n = X.size();
    int pos = -1;
    for(int i = 0; i < n; i++)if(X[i] == 1)pos = i;
    if(pos == -1){
        for(int i = 0; i < n; i++)X[i] = 1;
    }else{
        X[pos] = 0;
        for(int i = pos + 1; i < n; i++)X[i] = 1;
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        X.clear();
        in();
        prev();
        for(int i = 0; i < X.size(); i++)cout << X[i];
        cout << endl;
    }
}
/*

*/