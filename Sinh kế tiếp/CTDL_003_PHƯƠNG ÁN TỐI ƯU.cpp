#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;
int W, c[100], a[100], ok, n;
int X[100];

void next(){
	int i = n;
	while(i > 0 && X[i] == 1){
		X[i] = 0;
		i--;
	}
	if(!i)ok = 0;
	else X[i] = 1;
}

int main(){
	quick();
	cin >> n >> W;
	for(int i = 1; i <= n; i++)cin >> c[i];
	for(int i = 1; i <= n; i++)cin >> a[i];
	for(int i = 1; i <= n; i++)X[i] = 0;
	ok = 1;
	int max = -1;
	vector<int> v;
	while(ok){
		int sum = 0, temp = 0;
		for(int i = 1; i <= n; i++){
			sum += c[i] * X[i];
			temp += a[i] * X[i];
		}
		if(sum > max && temp <= W){
			v.clear();
			max = sum;
			for(int i = 1; i <= n; i++)v.push_back(X[i]);
		}
		next();
	}
	cout << max << endl;
	for(int x : v)cout << x << ' ';
}
/*

*/