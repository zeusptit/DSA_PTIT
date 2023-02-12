#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    vector<vector<int>> v;
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++)if(a[j] < a[min])min = j;
        if(min != i)
            swap(a[i], a[min]);
        vector<int> x(a, a + n);
        v.push_back(x);
    }
    for(int i = v.size() - 1; i >= 0; i--){
        cout << "Buoc " << i + 1 << ": ";
        for(int x : v[i]) cout << x << ' ';
        cout << endl;
    }
}
/*

*/
