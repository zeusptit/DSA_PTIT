#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n;
string s;
vector<string> v;

void Try(string temp, int pos){
    for(char j = pos; j < n; j++){
        temp += s[j];
        v.push_back(temp);
        Try(temp, j + 1);
        temp.pop_back();
    }
}
int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n >> s;
        sort(s.begin(), s.end());
        v.clear();
        Try("", 0);
        for(auto x : v)cout << x << ' ';
        cout << endl;
    }
}
/*

*/