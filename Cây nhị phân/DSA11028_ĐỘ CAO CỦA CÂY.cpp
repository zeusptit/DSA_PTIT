#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int BFS(vector<int> a[])
{
    bitset<100005> bs;
    int res = -1;
    queue<int> q;
    int f[100005] = {};
    int top;
    q.push(1);
    bs[1] = 1;
    while(q.size()){
        top = q.front();
        q.pop();
        for(int &x : a[top]){
            if(!bs[x]){
                f[x] = f[top] + 1;
                res = max(res, f[x]);
                q.push(x);
            }
        }
    }
    return res;
}

int main(){
    quick();
    int test, n, x, y;
    cin >> test;
    while(test--){
        cin >> n;
        --n;
        vector<int> a[n + 5];
        while(n--){
            cin >> x >> y;
            a[x].pb(y);
        }
        cout << BFS(a) << endl;
    }
}
/*

*/