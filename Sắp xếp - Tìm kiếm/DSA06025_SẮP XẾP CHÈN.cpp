#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a)cin >> x;
	for(int i = 0; i < n; i++){
		int k = a[i], j = i - 1;
		while(j >= 0 && a[j] > k){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k;
		cout << "Buoc " << i << ": ";
		for(int k = 0; k < i + 1; k++)cout << a[k] << ' ';
		cout << endl;
	}
}
/*

*/
