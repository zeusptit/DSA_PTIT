#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

vector<pair<char, char>> v;
void trans(int n, char a, char c){
    v.push_back({a, c});
}

void tower(int n, char a, char b, char c){
    if(n == 1)
        trans(n, a, c);
    else{
        tower(n - 1, a, c, b);
        trans(n - 1, a, c);
        tower(n - 1, b, a, c);
    }
}

int main(){
    quick();
    int n; cin >> n;
    char a = 'A', b = 'B', c = 'C';
    tower(n, a, b, c);
    for(auto x : v)
        cout << x.first << " -> " << x.second << endl;
}

/*

*/