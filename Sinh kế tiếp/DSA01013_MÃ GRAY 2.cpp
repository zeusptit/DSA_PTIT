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
        string s; cin >> s;
        int n = s.length();
        string temp(n, '0');
        temp[0] = s[0];
        for(int i = 1; i < n; i++){
            if(s[i] == '1'){
                if(temp[i - 1] == '1')temp[i] = '0';
                else temp[i] = '1';
            }else{
                temp[i] = temp[i - 1];
            }
        }
        cout << temp << endl;
    }
}
/*

*/