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
        int a[n];
        for(int &x : a) cin >> x;
        vector<int> v;
        for(int i = 0; i < n; i++){
            auto temp = upper_bound(v.begin(), v.end(), a[i]);
            if(temp == v.end())
                v.push_back(a[i]);
            else
                *temp = a[i];
        }
        cout << n - v.size() << endl;
    }
}
/*

*/