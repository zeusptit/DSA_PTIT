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
        ll p, q; cin >> p >> q;
        vector<string> v;
        while(p > 0){
            while(p > q){
                v.pb("1/1");
                p -= q;
            }
            if(q % p == 0){
                string temp = "1/";
                temp += to_string(q/p);
                v.pb(temp);
                break;
            }else{
                int x = q / p + 1;
                string temp = "1/";
                temp += to_string(x);
                v.pb(temp);
                p = p * x - q;
                q = x * q;
            }
        }
        if(v.size()){
            for(int i = 0; i < v.size(); i++){
                if(i != v.size() - 1)
                    cout << v[i] << " + ";
                else 
                    cout << v[i] << endl;
            }
        }
    }
}
/*

*/