#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

char c;
vector<string> s;
int check[100], n;

int solve(string s){
    int n = s.length();
    for(int i = 1; i < n - 1; i++){
        if(s[i] == 'A' || s[i] == 'E'){
            if((s[i - 1] != 'A' && s[i - 1] != 'E') && (s[i + 1] != 'A' && s[i + 1] != 'E'))
                    return 0;
        }
    }
    return 1;
}

void Try(char i, string t){
    for(char j = i; j <= c; j++){
        if(!check[j]){
            t += j;
            check[j] = 1;
            if(t.size() == n && solve(t))
                cout << t << endl;
            else
                Try(i, t);
            check[j] = 0;
            t.pop_back();
        }
    }
}

int main(){
    quick();
    cin >> c;
    n = c - 'A' + 1;
    Try('A', "");
}
/*

*/