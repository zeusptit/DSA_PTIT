#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int q, x; cin >> q;
    queue<int> Q;
    string s; 
    while(q--){
        cin >> s;
        if(s == "PUSH"){
            cin >> x;
            Q.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(Q.empty())
                cout << "NONE" << endl;
            else
                cout << Q.front() << endl;
        }
        else{
            if(!Q.empty())
                Q.pop();
        }
    }
}
/*

*/