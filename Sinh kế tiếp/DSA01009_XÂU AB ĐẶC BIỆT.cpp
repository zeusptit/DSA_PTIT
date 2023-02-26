#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;
int n, k;
queue<string> q;
vector<string> v;

bool check(string s){
	int cnt = 0, temp = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'B'){
			if(temp == k)cnt++;
			temp = 0;
		}else{
			temp++;
		}
	}
	if(temp == k)cnt++;
	return cnt == 1;
}

int main(){
	quick();
	cin >> n >> k;
	q.push("A"), q.push("B");
	while(1){
		string top = q.front(); q.pop();
		if(top.size() == n && check(top))
			v.push_back(top);
		if(top.size() > n)break;
		q.push(top + "A");
		q.push(top + "B");
	}
	cout << v.size() << endl;
	for(string x : v)cout << x << endl;
}
/*

*/