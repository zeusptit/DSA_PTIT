#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, t = 0, d = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'X')x++;
        else if(s[i] == 'T')t++;
        else d++;
    }
    int cnt = 0;
    for(int i = n - d; i < n; i++)
        if(s[i] != 'D')cnt++;
    for(int i = 0; i < x; i++)
        if(s[i] != 'X')cnt++;
    int a = 0, b = 0;
    for(int i = n - d; i < n; i++)
        if(s[i] == 'X')a++;
    for(int i = 0; i < x; i++)
        if(s[i] == 'D')b++;
    cout << cnt - min(a, b);
}
/*

*/