#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, m, test;
vector<int> adj[1001];
vector<pair<int, int>> edge;

int main(){
    quick();
    edge.clear();
    cin >> n; cin.ignore();
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        stringstream ss(s);
        string temp;
        while(ss >> temp){
            int x = stoi(temp); 
            if(x > i)
                edge.pb({i, x});
        }
    }
    for(auto i : edge){
        cout << i.first << ' ' << i.second << endl;
    }
}
/*

*/