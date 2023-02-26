#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

bool check(string s){
	if(s[0] != '8' || s[s.length() - 1] != '6')return false;
	for(int i = 0; i < s.length() - 1; i++){
		if(s[i] == '8' && s[i + 1] == '8')
			return false;
	}
	for(int i = 0; i < s.length() - 3; i++){
		if(s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6' && s[i + 3] == '6')
			return false;
	}
	return true;
}

int main(){
	quick();
	int n; cin >> n;
	vector<string> v;
	queue<string> q;
	string a = "6", b = "8";
	q.push(a), q.push(b);
	while(1){
		string top = q.front(); q.pop();
		if(top.size() > n)break;
		if(top.size() == n && check(top))
			v.push_back(top);
		q.push(top + a);
		q.push(top + b);
	}
	for(string x : v)cout << x << endl;
}
/*

*/