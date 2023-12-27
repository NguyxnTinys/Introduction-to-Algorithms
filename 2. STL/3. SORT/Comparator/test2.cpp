/*
 Sap xep theo tri tuyet doi abs
 + sap xep theo chieu tang dan cua tri tuyet doi,
 neu tri tuyet doi bang nhau thi so nao be hon dung truoc
*/

#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define se second
#define fi first
#define pll pair<ll, ll>
#define pb push_back
#define REP(i, n)  for (int i = 0, _n = (n); i < _n; ++i)
#define fu(i, a, b)  for (int i = (a), _b = (b); i < _b; ++i) 
#define fd(i, b, a)  for (int i = (b), _a = (a); i > _a; --i)
#define ALL(v)  (v).begin(), (v).end()
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

const int maxn = 1e9;

bool cmp(int &a, int &b){
    if (abs(a) != abs(b)) return abs(a) < abs(b);
    else return a < b;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    fu(i, 0, n){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    fu(i, 0, n){
        cout << a[i] << " ";
    }

    cerr << "\nNguyxn Truong: " << TIME << "s.\n";
    return(0);
}