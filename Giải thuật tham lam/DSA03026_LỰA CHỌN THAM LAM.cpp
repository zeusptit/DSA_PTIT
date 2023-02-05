#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int s, d; cin >> d >> s;
    if(s > d * 9 || d > 1 && s == 0){
        cout << -1 << ' ' << -1 << endl;
        return 0;
    }else{
        int S = s;
        vector<int> ans1(d, 0), ans2(d, 0);
        s--;
        for(int i = d - 1; i >= 0; i--){
            if(s > 9){
                ans1[i] = 9;
                s -= 9;
            }else{
                ans1[i] = s;
                s = 0;
            }
        }
        ans1[0] += 1;
        for(int i = 0; i < d; i++)cout << ans1[i];
        cout << ' ';
        for(int i = 0; i <= d - 1; i++){
            if(S > 9){
                ans2[i] = 9;
                S -= 9;
            }else{
                ans2[i] = S;
                S = 0;
            }
        }
        for(int i = 0; i < d; i++)cout << ans2[i];
        cout << endl;
    }
}
/*

*/