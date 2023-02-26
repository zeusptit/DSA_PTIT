#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int k;
char X[100], c;

void Try(int i, char st){
    for(char j = st; j <= c; j++){
        X[i] = j;
        if(i == k){
            for(int l = 1; l <= i; l++)cout << X[l];
            cout << endl;
        }else
            Try(i + 1, j);
    }
}

int main(){
    quick();
    cin >> c >> k;
    Try(1, 'A');
}
/*

*/