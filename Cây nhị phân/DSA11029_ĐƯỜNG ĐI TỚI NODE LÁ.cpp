#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

void BFS(vector<int> a[], int trace[])
{
    queue<int> q;
    bitset<1005> visited;
    visited[1] = 1;
    q.push(1);
    int top;
    while(q.size()){
        top = q.front();
        q.pop();
        for(int &x : a[top]){
            if(!visited[x]){
                visited[x] = 1;
                trace[x] = top;
                q.push(x);
            }
        }
    }
}

void findPath(int trace[], int E){
    stack<int> path;
    path.push(E);
    while(trace[E]){
        E = trace[E];
        path.push(E);
    }
    while(path.size()){
        cout << path.top() << ' ';
        path.pop();
    }
    cout << endl;
}

int main(){
    quick();
    int test, n;
    cin >> test;
    while(test--){
        cin >> n;
        vector<int> a[n + 5];
        int x, y;
        bitset<1005> f;
        for(int i = 1; i < n; ++i){
            cin >> x >> y;
            a[x].pb(y);
            f[x] = 1;
        }
        int trace[1005] = {};
        BFS(a, trace);
        for(int i = 2; i <= n; ++i)
            if(!f[i])
                findPath(trace, i);
    }
}
/*

*/