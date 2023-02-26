#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

vector<string> v;
string s;
int check[100];

void Try(string temp){
    for(int j = 0; j < s.length(); j++){
        if(!check[s[j]]){
            temp += s[j];
            check[s[j]] = 1;
            if(temp.length() == s.length()){
                v.pb(temp);
            }
            else
                Try(temp);
            check[s[j]] = 0;
            temp.pop_back();
        }
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        v.clear();
        cin >> s;
        sort(s.begin(), s.end());
        Try("");
        for(auto x : v)cout << x << ' ';
        cout << endl;
    }
}
/*

*/