/*
nhap sau s
1. in xau
2. xau co bao nhieu tu la doi xung
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
bool symmetry(string &s){
	int tmp = s.size();
	int x;
	if (s.size() % 2 == 0) x = s.size() / 2;
	else x = (s.size() - 1) / 2;

	string a = "";
	for (int i = tmp - 1; i >= x; --i){
		a += s[i];
	}
	int cnt = 0;
	for (int i = 0; i < x; ++i){
		if (a[i] == s[i]) cnt++;
	}
	if (cnt == x) return true;
	else return false;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    stringstream ss(s);
    string m;
    vector<std::string> v;

    while(ss >> m){
    	v.push_back(m);
    }

    int cnt = 0;
    for (int i = 0; i < v.size(); ++i){
    	cout << v[i] << " ";
    	if (symmetry(v[i])) cnt++;
    }
    cout << "\n";
    cout << cnt;
    cerr << "Nguyxn Truong: " << TIME << "s.\n";
    return(0);
}