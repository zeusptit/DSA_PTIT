#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    vector<int> odd,even;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(i % 2 == 0)odd.pb(x);
        else even.pb(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int> ());
    int i = 0, j = 0;
    while(i < odd.size() && j < even.size()){
        cout << odd[i++] << ' ' << even[j++] << ' ';
    }
    while(i < odd.size())cout << odd[i++] << ' ';
    while(j < even.size())cout << even[j++] << ' ';
}
/*

*/