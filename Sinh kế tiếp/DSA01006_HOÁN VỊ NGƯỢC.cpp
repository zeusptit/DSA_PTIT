#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        string s;
        for(int i = n; i >= 1; i--)s += i + '0';
        do{
            cout << s << ' ';
        }while(prev_permutation(s.begin(), s.end()));
        cout << endl;
    }
}
/*

*/