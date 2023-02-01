#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	vector<int> v;
	for(int i = 0; i < n; i++){
		auto temp = lower_bound(v.begin(), v.end(), a[i]);
		if(temp == v.end())
			v.push_back(a[i]);
		else
			*temp = a[i];
	}
	cout << v.size();
}
