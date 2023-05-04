#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

string check(string s) {
    stack<char> str;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ')') {
            string temp;
            while (str.size() && str.top() != '(') {
                temp = str.top() + temp;
                str.pop();
            }
            str.pop();
            char t;
            if (str.size())
                t = str.top();
            for (int j = 0; j < temp.length(); j++) {
                if (t == '-' && str.size()) {
                    if (temp[j] == '-')
                        str.push('+');
                    else if (temp[j] == '+')
                        str.push('-');
                    else
                        str.push(temp[j]);
                }
                else {
                    str.push(temp[j]);
                }
            }
        }
        else
            str.push(s[i]);
    }
    string res;
    while (str.size()) {
        res = str.top() + res;
        str.pop();
    }
    return res;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        string a, b; cin >> a >> b;
        if(check(a) == check(b))cout << "YES\n";
        else cout << "NO\n";
    }
}
/*

*/