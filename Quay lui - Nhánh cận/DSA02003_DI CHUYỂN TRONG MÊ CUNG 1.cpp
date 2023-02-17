#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int a[100][100],n;
bool check;

void in()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j, string s)
{
    if(!a[1][1])
        return;
    if(i == n && j == n)
    {
        check = true;
        cout << s << ' ';
        return;
    }

    if(i + 1 <= n && a[i + 1][j])
    {
        s += 'D';
        a[i + 1][j] = 0;
        Try(i + 1,j,s);

        a[i + 1][j] = 1;
        s.pop_back();
    }

    if(j + 1 <= n && a[i][j + 1])
    {
        s += 'R';
        a[i][j + 1] = 0;
        Try(i,j + 1,s);

        a[i][j + 1] = 1;
        s.pop_back();
    }
}
int main(){
    quick();
    int test; cin >> test;
    while(test--){
        in();
        check = false;
        Try(1,1,"");
        if(!check)
            cout << -1;
        cout << endl;  
    }
}
/*
*/