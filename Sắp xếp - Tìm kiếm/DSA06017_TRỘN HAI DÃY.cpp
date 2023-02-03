#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main()
{
	quick();
	int test; cin >> test;
	while(test--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for(int &x : a) cin >> x; sort(a, a + n);
		for(int &x : b) cin >> x; sort(b, b + n);
		int i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] < b[j]){
				cout << a[i] << ' ';
				i++;
			}else if(a[i] > b[j]){
				cout << b[j] << ' ';
				j++;
			}else{
				cout << a[i] << ' ' << b[j] << ' ';
				i++;
				j++;
			}
		}
		while(i < n)cout << a[i++] << ' ';
		while(j < m)cout << b[j++] << ' ';
		cout << endl;
	}
}
