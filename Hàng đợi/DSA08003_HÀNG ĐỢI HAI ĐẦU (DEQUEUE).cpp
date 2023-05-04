#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int q, x; cin >> q;
    deque<int> dq;
    string s; 
    while(q--){
        cin >> s;
        if(s == "PUSHFRONT"){
            cin >> x;
            dq.push_front(x);
        }
        else if(s == "PRINTFRONT")
        {
            if(!dq.empty())
                cout << dq.front() << endl;
            else
                cout << "NONE" << endl;
        }
        else if(s == "POPFRONT"){
            if(!dq.empty())
                dq.pop_front();
        }
        else if(s == "PUSHBACK"){
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PRINTBACK"){
            if(!dq.empty())
                cout << dq.back() << endl;
            else
                cout << "NONE" << endl;
        }       
        else if(s == "POPBACK"){
            if(!dq.empty())
                dq.pop_back();
        }
    }
}
/*

*/