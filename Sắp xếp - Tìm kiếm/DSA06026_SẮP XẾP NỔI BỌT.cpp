#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    for(int i = 0; i < n - 1; i++){
        int kt = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                kt = 1;
            }
        }
        if(kt == 0)break;
        cout << "Buoc " << i + 1<< ": ";
        for(int k = 0; k < n; k++)cout << a[k] << ' ';
        cout << endl;
    }
}
/*

*/
