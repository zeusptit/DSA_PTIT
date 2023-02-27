#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, a[100][100];
bool check;

string path = "DLRU";
pair<int, int> p[] = {{1, 0}, {0, -1}, {0, 1}, {-1, 0}};

void Try(int i, int j, string s){
    if(!a[1][1])return;
    if(i == n && j == n){
        check = true;
        cout << s << ' ';
        return;
    }

    for(int k = 0; k < 4; k++){
        int inew = p[k].first + i;
        int jnew = p[k].second + j;
        if(inew >= 1 && inew <= n && jnew >= 1 && jnew <= n && a[inew][jnew]){
            a[inew][jnew] = 0;
            s += path[k];
            Try(inew, jnew, s);

            a[inew][jnew] = 1;
            s.pop_back();
        }
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n;
        check = false;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        Try(1, 1, "");
        if(!check)
            cout << -1 << endl;
        else
            cout << endl;
    }
}
/*

*/