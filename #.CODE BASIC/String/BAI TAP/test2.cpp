/*
nhap sau s
1. delete space
2. chuyen ki tu dau thanh chu hoa, nhung ki tu khac thanh chu thuong
*/
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#define ALL(v)  (v).begin(), (v).end()
#define REP(i, n)  for (int i = 0, _n = (n); i < _n; ++i)
#define FOR(i, a, b)  for (int i = (a), _b = (b); i <= _b; ++i) 
#define FORD(i, b, a)  for (int i = (b), _a = (a); i >= _a; --i)
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

using namespace std;

const int maxn = 1e9;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i){
    	s[i] = tolower(s[i]);
    }
    vector<string> v;
    stringstream ss(s);
    // 1.
    string m;
    while (ss >> m){
    	cout << m;
    	v.push_back(m);
    }
    cout << "\n";
    // 2.
    for (int i = 0; i < v.size(); ++i){
    	v[i][0] = toupper(v[i][0]);
    	cout << v[i] << " ";
    }
    cerr << "Nguyxn Truong: " << TIME << "s.\n";
    return(0);
}