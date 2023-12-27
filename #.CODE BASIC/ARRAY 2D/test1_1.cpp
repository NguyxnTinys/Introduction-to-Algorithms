/*
input: array 2d
output:
	1. nhung so la so nguyen to (prime)
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

const int maxn = 100000 + 1;
const int maxx = 100000;
int prime[1000001];
void sieve()
{
    for (int i = 0; i < 1000000; ++i)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i < 10000; ++i)
    {
        if (prime[i])
        {
            for (int j = i * i; j < 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	sieve();
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> a[i][j];
		}
	}    
	set<int> s;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			int x = a[i][j];
			if (prime[x]) s.insert(a[i][j]);
		}
	}   
	for (set<int> :: iterator x = s.begin(); x != s.end(); ++x){
		cout << *x << " ";
	}

    cerr << "Nguyxn Truong: " << TIME << "s.\n";
    return(0);
}