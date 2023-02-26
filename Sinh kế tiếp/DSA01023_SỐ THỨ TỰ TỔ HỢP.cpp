#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;
int X[100], n, k, ok;

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

bool check(int a[]){
	for(int i = 1; i <= k; i++)
		if(X[i] != a[i])
			return false;
	return true;
}

int main(){
	int test; cin >> test;
	while(test--){
		int a[100];
		cin >> n >> k;
		for(int i = 1; i <= k; i++)X[i] = i;
        for(int i = 1; i <= k; i++)cin >> a[i];
        ok = 1;
		int cnt = 1;
		while(ok){
			if(check(a))break;
			cnt++;
			next();
		}
		cout << cnt << endl;
	}
    
}
/*

*/