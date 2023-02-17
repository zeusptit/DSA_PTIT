#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n], kt = 0, max_freq = 0;
		map<int,int> mp;
		for(int &x : a){
			cin >> x;
			mp[x]++;
			max_freq = max(max_freq, mp[x]);
		}
		for(auto x : mp){
			if(x.second > n / 2 && x.second == max_freq){
				cout << x.first << endl;
				kt = 1;
				break;
			}
		}
		if(!kt)cout << "NO\n";
	}
}
/*

*/