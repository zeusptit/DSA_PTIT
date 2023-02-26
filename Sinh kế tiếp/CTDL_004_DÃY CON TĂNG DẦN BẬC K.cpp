#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;
int n, k, a[100], X[100], cnt, ok;

void next(){
	int i = k;
	while(i > 0 && X[i] == n - k + i)i--;
	if(!i)ok = 0;
	else{
		X[i]++;
		for(int j = i + 1; j <= k; j++)
			X[j] = X[j - 1] + 1;
	}
}

bool check(){
	for(int i = 1; i <= k - 1; i++)
		if(a[X[i]] > a[X[i + 1]])
			return false;
	return true;
}

int main(){
	quick();
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		X[i] = i;
	}
	ok = 1, cnt = 0;
	while(ok){
		if(check())
			cnt++;
		next();
	}
	cout << cnt;
}
/*

*/