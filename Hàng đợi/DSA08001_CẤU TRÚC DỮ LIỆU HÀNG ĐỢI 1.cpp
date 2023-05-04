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
        int n; cin >> n;
        int x, k;
        queue<int> q;
        while(n--){
            cin >> x;
            switch (x){
                case 1:
                    cout << q.size() << endl;
                    break;
                case 2:
                    if(q.empty())
                        cout << "YES" << endl;
                    else 
                        cout << "NO" << endl; 
                    break;
                case 3:
                    cin >> k;
                    q.push(k);
                    break;
                case 4:
                    if(!q.empty())
                        q.pop();
                    break;
                case 5:
                    if(q.empty())
                        cout << -1 << endl;
                    else
                        cout << q.front() << endl;
                    break;
                case 6:
                    if(q.empty())
                        cout << -1 << endl;
                    else
                        cout << q.back() << endl;
                    break;
            }
        }
    }
}
/*

*/