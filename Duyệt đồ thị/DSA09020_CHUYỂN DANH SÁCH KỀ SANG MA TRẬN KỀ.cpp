#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, m, test, u;
vector<int> adj[1001];
vector<pair<int, int>> edge;
int visited[1001];
int matrix[1001][1001];

int main(){
    quick();
    memset(matrix, 0, sizeof(matrix));
    cin >> n; cin.ignore();
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        stringstream ss(s);
        string temp;
        while(ss >> temp){
            int x = stoi(temp);
            matrix[i][x] = 1; 
            matrix[x][i] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}
/*

*/