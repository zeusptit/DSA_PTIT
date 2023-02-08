#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int solve(int a[], int l, int r, int X){
	if(l <= r){
		int m = (l + r) / 2;
		if(a[m] == X)return m;
		else if(a[m] > X)return solve(a, l, m - 1, X);
		else return solve(a, m + 1, r, X);
	}else
		return -1;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n, X; cin >> n >> X;
		int a[n]; 
		for(int &x : a)cin >> x;
		int temp = solve(a, 0, n - 1, X);
		if(temp != -1)
			cout << 1 << endl;
		else
			cout << -1 << endl;
	}
}
/*

*/
