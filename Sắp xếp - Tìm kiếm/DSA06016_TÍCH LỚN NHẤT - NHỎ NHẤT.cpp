#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int test; cin >> test;
	while(test--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for(int &x : a)cin >> x;
		for(int &x : b)cin >> x;
		int t1 = *max_element(a, a + n), t2 = *min_element(b, b + m);
		cout << 1ll * t1 * t2 << endl;		
	}
}
/*

*/
