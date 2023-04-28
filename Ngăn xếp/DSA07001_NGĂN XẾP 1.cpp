#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int x;
    string s;
    stack<int> st1, st2;
    while(cin >> s){
        if(s == "push"){
            cin >> x;
            st1.push(x);
        }else if(s == "pop" && st1.size()){
            st1.pop();
        }else{
            if(st1.empty())
                cout << "empty";
            else{
                while(!st1.empty()){
                int temp = st1.top();
                st2.push(temp);
                st1.pop();
                }
                while(!st2.empty()){
                    int temp = st2.top();
                    st1.push(temp);
                    st2.pop();
                    cout << temp << ' ';
                }
            }
            cout << endl;
        }
    }
}
/*

*/