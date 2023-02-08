#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n]; map<int,int> mp;
		for(int &x : a){
			cin >> x;
			mp[x]++;
		}
		vector<pair<int,int>> vp;
		for(auto x : mp){
			for(int i = 1; i <= x.second; i++)
				vp.push_back({x.first, x.second});
		}
		stable_sort(vp.begin(), vp.end(), [](pair<int,int> a, pair<int,int> b) -> bool{
			if(a.second != b.second)
				return a.second > b.second;
			else
				return a.first < b.first;
		});
		for(auto x : vp)
			cout << x.first << ' ';
		cout << endl;
	}
}
/*

*/
