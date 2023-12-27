/*
    trong Oxyz nhap toa do 3 diem
    sap sep theo thu tu tang dan theo so chu so nguyen to xuat hien nhieu nhat dung trc
    neu so chu so bang nhau thi so nao xuat hien truoc in ra truoc
*/
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
using ll = long long;
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

int check(ll a){
    if (a == 0) return 1;
    int cnt = 0;
    while(a){
        ll x = a % 10;
        if (x == 2 || x == 3 || x == 5 || x == 7) cnt++;
        a /= 10;
    }
    return cnt;
}
bool cmp(ll a, ll b){
    return check(a) > check(b);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    ll a[n];
    fu(i, 0, n){
        cin >> a[i];
    }
    stable_sort(a, a + n, cmp);
    fu(i, 0, n){
        cout <<  a[i] << "  " << check(a[i]) << "\n";
    }
    cerr << "\nNguyxn Truong: " << TIME << "s.\n";
    return(0);
}