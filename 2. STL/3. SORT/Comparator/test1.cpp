/*
sap xep & kiem tra so luong chan le

+ Sap xep so luong chu so chan xuat hien trong mang theo chieu tang 
dan, neu co cung chu so chan thi so nao be hon dung truoc

+ tuong tu sap xep voi so le
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

int check(int a){
    int ans = 0;
    if (a == 0) return 1;
    while(a){
        //int x = a% 10;
        if (a % 2 == 0) ans++;
        a /= 10;
    }
    return ans;
}

bool cmp(int &a, int &b){
    if (check(a) != check(b)) return check(a) < check(b);
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