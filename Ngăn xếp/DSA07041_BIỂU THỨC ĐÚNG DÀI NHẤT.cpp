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
        int cnt = 0;
        while(1){
            int temp = s.find("()");
            if(temp == -1)break;
            else{
                cnt += 2;
                s.erase(temp, 2);
            }
        }
        cout << cnt << endl;
    }
}
/*

*/