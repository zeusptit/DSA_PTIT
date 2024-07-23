#include "bits/stdc++.h"
using namespace std;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define el '\n'
 
using ll = long long;
const int mod = 1e9 + 7;
const int maxN = 1e5;
 
ll test = 1, n, k;

void greaterRight(vector<int> v, int n, vector<int>& g){
	stack<int> st;
	st.push(n - 1);
	for(int i = n - 2; ~i; i--){
		if(!st.empty() and v[i] < v[st.top()]){
			g[i] = st.top();
			st.push(i);
		}else{
			while(!st.empty() and v[i] >= v[st.top()])st.pop();
			if(st.size())g[i] = st.top();
			else g[i] = -1;
			st.push(i);
		}
	}

}

void smallerRight(vector<int> v, int n, vector<int>& s){
	stack<int> st;
	st.push(n - 1);
	for(int i = n - 2; ~i; i--){
		if(!st.empty() and v[i] > v[st.top()]){
			s[i] = st.top();
			st.push(i);
		}else{
			while(!st.empty() and v[i] <= v[st.top()])st.pop();
			if(st.size())s[i] = st.top();
			else s[i] = -1;
			st.push(i);
		}
	}
}
 
void solve(){
    cin >> n;
    vector<int> v(n), s(n, 0), g(n, 0);
    for(int &x : v)cin >> x;
    g[n - 1] = -1, s[n - 1] = -1;
    greaterRight(v, n, g);
	smallerRight(v, n, s);
	for(int i = 0; i < n; i++){
		cout << ((g[i] != -1 and s[g[i]] != -1) ? v[s[g[i]]] : -1) << ' ';
	}
	cout << el;
}
 
int main(){
    quick();
    cin >> test;
    while(test--){
        solve();
    }
}
