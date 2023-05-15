#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int test, ok;

void Try(int i, vector<int> select, int n, string s){
    if(ok)return;
    for(int j = 0; j < 10; j++){
        select.pb(j);
        if(i == n){
            int x = 0;
            string temp = s;
            for(int i = 0; i < s.length(); i++){
                if(i != 3 && temp[i] == '?')
                    temp[i] = select[x++] + '0';
            }
            if(temp[0] != '0' && temp[5] != '0' && temp[10] != '0'){
                int a = stoi(temp.substr(0, 2));
                int b = stoi(temp.substr(5, 2));
                int c = stoi(temp.substr(10, 2));
                if(temp[3] == '+' && a + b == c){
                    cout << temp << endl;
                    ok = 1;
                    return;
                }
                if(temp[3] == '-' && a - b == c){
                    cout << temp << endl;
                    ok = 1;
                    return;
                }
                if(temp[3] == '?'){
                    if(a + b == c){
                        temp[3] = '+';
                        cout << temp << endl;
                        ok = 1;
                        return;
                    }
                    if(a - b == c){
                        temp    [3] = '-';
                        cout << temp << endl;
                        ok = 1;
                        return;
                    }
                }
            }
        }
        if(i < n)Try(i + 1, select, n, s);
        select.pop_back();
    }
}

int main(){
    quick();
    int test; cin >> test;
    cin.ignore();
    while(test--){
        string s; getline(cin, s);
        int n = 0;
        ok = 0;
        vector<int> select;
        for(int i = 0; i < s.length(); i++){
            if(i != 3 && s[i] == '?')
                n++;
        }
        Try(0, select, n, s);
        if(!ok)
            cout << "WRONG PROBLEM!\n";
    }
}
/*

*/