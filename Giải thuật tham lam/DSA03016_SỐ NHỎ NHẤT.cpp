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
        int s, d; cin >> s >> d;
        if(s > d * 9){
            cout << -1 << endl;
            continue;
        }else{
            vector<int> ans(d, 0);
            s--;
            for(int i = d - 1; i >= 0; i--){
                if(s > 9){
                    ans[i] = 9;
                    s -= 9;
                }else{
                    ans[i] = s;
                    s = 0;
                }
            }
            ans[0] += 1;
            for(int i = 0; i < d; i++)cout << ans[i];
            cout << endl;
        }
    }
}
/*

*/