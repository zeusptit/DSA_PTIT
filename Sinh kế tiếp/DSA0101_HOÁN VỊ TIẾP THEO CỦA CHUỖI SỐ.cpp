#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	quick();
	int test; cin >> test;
    while(test--){
		int t; cin >> t;
		string s; cin >> s;
		int X[s.length()], n = s.length();
		for(int i = 0; i < n; i++)X[i] = s[i] - '0';
		n--;
		int i = n - 1;
		while(i >= 0 && X[i] >= X[i + 1])i--;
		cout << t << ' ';
		if(i < 0)cout << "BIGGEST\n";
		else{
			int k = n;
			while(X[i] >= X[k] && k > 0)k--;
			swap(X[i], X[k]);
			int l = i + 1, r = n;
			while(l < r)
				swap(X[l++], X[r--]);
			for(int i = 0; i <= n; i++)
				cout << X[i];
			cout << endl;
		}
    }
}
/*

*/