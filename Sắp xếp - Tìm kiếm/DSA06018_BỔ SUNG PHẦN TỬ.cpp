#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		map<int,int> mp;
		for(int &x : a){
			cin >> x;
			mp[x]++;
		}
		auto x = mp.begin(), y = mp.end(); y--;
		int l = x->first, r = y->first, cnt = 0;
		for(int i = l; i <= r; i++){
			if(!mp[i])
				cnt++;
		}
		cout << cnt << endl;
	}
}
/*

*/
