/*
	cho mang a[] gom n phan tu la ki tu
	dem xem co bao nhieu ki tu khac nhau trong mang

	input:
	dong 1: n <so luong phan tu trong mang>
	dong 2: n ki tu 

	output:
	dong 1: so ki tu khac nhau trong mang
	dong 2: in cac ki tu theo tu dien tang dan
	dong 3: in cac ki tu theo tu dien giam dan

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

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    char a[n];
    set<char> s1;
    set<char, greater<char>> s2;
    fu(i, 0, n){
        cin >> a[i];
        s1.insert(a[i]);
        s2.insert(a[i]);
    }
    cout << s1.size() << "\n";
    for (auto x : s1){
        cout << x;
    }
    cout << "\n";
    for (auto x : s2){
        cout << x;
    }
    cerr << "\nNguyxn Truong: " << TIME << "s.\n";
    return(0);
}