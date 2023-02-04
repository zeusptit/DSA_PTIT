#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string a, b; cin >> a >> b;
    for(char &x : a)if(x == '6')x = '5';
    for(char &x : b)if(x == '6')x = '5';
    cout << stoi(a) + stoi(b) << ' ';
    for(char &x : a)if(x == '5')x = '6';
    for(char &x : b)if(x == '5')x = '6';
    cout << stoi(a) + stoi(b) << endl;  
}
/*

*/