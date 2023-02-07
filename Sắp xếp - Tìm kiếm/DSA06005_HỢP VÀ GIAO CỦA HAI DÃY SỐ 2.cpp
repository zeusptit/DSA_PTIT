#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n, m; cin >> n >> m;
        set<int> Union;
        map<int,int> Intersection;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            Union.insert(x);
            Intersection[x] = 1;
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            Union.insert(x);
            if(Intersection[x] == 1)
                Intersection[x] = 2; 
        }
        for(int x : Union)cout << x << ' ';
        cout << endl;
        for(auto x : Intersection){
            if(x.second == 2)
                cout << x.first << ' ';
        }
        cout << endl;
    }
}
/*

*/