#include <bits/stdc++.h>
using namespace std;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int n, a[200], X[200];
vector<string> v;

void Try(int i){
    for(int j = 0; j <= 1; j++){
        X[i] = j;
        if(i == n){
            string temp = "";
            int sum = 0;
            for(int k = 1; k <= n; k++)if(X[k] == 1)temp += to_string(a[k]) + " ", sum += a[k];
            //temp.pop_back();
            if(sum % 2)v.push_back(temp);
        }else
            Try(i + 1);
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n;
        for(int i = 1; i <= n; i++)cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        v.clear();
        Try(1);
        //sort(v.begin(), v.end());
        for(auto x : v){
            cout << x << endl;
        }
        cout << endl;
    }
}
/*

*/