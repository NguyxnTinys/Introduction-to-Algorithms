/*
    in ra man hinh cac so co tan suat xuat hien la chan
    vd 1 2 3 4 1 3 3
    out:
        1 2
        3 3 
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
    int a[n];
    
    fu(i, 0, n){
        cin >> a[i];     
    }
    //multiset<int> s1;
    // fu(i, 0, n){ 
    //     s1.insert(a[i]);   
    //     cout << s1.count(a[i]) << " ";
    // }

    map<int, int> mp;
    for (auto x : a){
        mp[x]++;
    }
    for (auto x : mp){
        if (x.se % 2 == 0) cout << x.fi << " " <<  x.se << "\n";
    }
    cerr << "\nNguyxn Truong: " << TIME << "s.\n";
}