#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, s, a[1000][1000], k;
int d[1000], truoc[1000];

const int MAX = 1e8;

void init(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 0) a[i][j] = MAX;
        }
    }
}

void Bellman_Ford(int s){
    for(int v = 1; v <= n;v++){
        d[v] = a[s][v];
        truoc[v] = s;
    }
    d[s] = 0;k = 1;
    while(k <= n - 2){
        for(int v = 1; v <= n ;v++){
            if(v != s){
                for(int u = 1; u <= n; u++){
                    if(d[v] > d[u] + a[u][v]){
                        d[v] = d[u] + a[u][v];
                        truoc[v] = u;
                    } 
                }
            }
        }
        k++;
    }
}

void Result(){
    for(int i = 1; i <= n; i++){
        cout << "K/c " << s << " -> " << i << " = " << d[i] << ";";
        int tmp = i;
        while(1){
            if(tmp == s){
                break;
            }
            cout << truoc[tmp] << " <- ";
            tmp = truoc[tmp]; 
        }
        cout << s << endl;
    }
}

int main(){
    quick();
    init();
    Bellman_Ford(s);
    Result();
}
/*

*/