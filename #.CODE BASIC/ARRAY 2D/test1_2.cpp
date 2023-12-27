/*
input: array 2d
output:
	2. find max value in array
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

    int m, n;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i){
    	for (int j = 0; j < m; ++j){
    		cin >> a[i][j];
    	}
    }
    int max = a[0][0];
    for (int i = 0; i < n; ++i){
    	for (int j = 0; j < m; ++j){
    		if (a[i][j] > max) max = a[i][j];
    	}
    }
    cout << max;
    cerr << "Nguyxn Truong: " << TIME << "s.\n";
    return(0);
}