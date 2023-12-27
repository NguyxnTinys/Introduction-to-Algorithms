/*
    trong Oxyz nhap toa do 3 diem
    sap sep theo thu tu tang dan va uu tien tu x -> y -> z
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

bool cmp(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b){
    if (a.fi != b.fi) return a.fi < b.fi;
    else if (a.se.fi != b.se.fi) return a.se.fi < b.se.fi;
    else return a.se.se < b.se.se;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    pair<int, pair<int, int>> a[n];
    fu(i, 0, n){
        cin >> a[i].fi >> a[i].se.fi >> a[i].se.se;
    }
    sort(a, a + n, cmp);
    fu(i, 0, n){
        cout <<  a[i].fi << " " << a[i].se.fi << " " << a[i].se.se << "\n";
    }
    cerr << "\nNguyxn Truong: " << TIME << "s.\n";
    return(0);
}