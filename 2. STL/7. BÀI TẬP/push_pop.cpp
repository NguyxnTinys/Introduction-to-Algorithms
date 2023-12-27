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
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
    	int lc;
    	cin >> lc;
	    	if (lc == 1){
	    		int x; cin >> x;
	    		v.push_back(x);
	    	}else if (lc == 2){
	    		if(!v.empty()) v.pop_back();
	    	}
    }
    if(v.empty()) cout << "EMPTY";
    for (int i = 0; i < v.size(); ++i){
   		cout << v[i] << " ";
    }
    return(0);
}