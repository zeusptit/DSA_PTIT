#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, test;
int Root[105];
map<int, pair<double, double>> m;

struct Element{
    int a, b;
    double dist;
};

int root(int i){
    if (Root[i] == -1) return i;
    else{
        int x = root(Root[i]);
        Root[i] = x;
        return x;
    }
}

bool cmp3(Element a, Element b){
    return a.dist < b.dist;
}

double calc(int i, int j){
    double a1 = m[i].first, b1 = m[i].second, a2 = m[j].first, b2 = m[j].second;
    return sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
}

int main(){
    quick();
    cin >> test;
    while(test--){
        Element a[10005];
        cin >> n;
        pair<double, double> A;
        double MAX = 0;
        int idx = 0;
        for(int i = 1; i <= n; ++i){
            cin >> A.first >> A.second;
            m[i] = A;
        }
        Element P;
        for(int i = 1; i <= n; ++i){
            for(int j = i + 1; j <= n; ++j){
                P = {i, j};
                P.dist = calc(i, j);
                a[idx] = P;
                idx++;
            }
        }
        sort(a, a + idx, cmp3);
        for(int i = 0; i <= n; ++i) Root[i] = -1;
        int p, q;
        for(int i = 0; i < idx; ++i){
            P = a[i];
            p = root(P.a);
            q = root(P.b);
            if(p != q){
                Root[p] = q;
                MAX += P.dist;
            }
        }
        cout << setprecision(6) << fixed << MAX << endl;
        m.clear();
    }
    return 0;
}
/*

*/