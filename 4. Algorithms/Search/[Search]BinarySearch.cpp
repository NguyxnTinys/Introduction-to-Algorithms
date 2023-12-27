// Binary Search

#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
#define se second
#define fi first
#define pll pair<ll, ll>
#define pii pair<int, int>
#define pb push_back
#define REP(i, n)  for (int i = 0, _n = (n); i < _n; ++i)
#define fu(i, a, b)  for (int i = (a), _b = (b); i < _b; ++i) 
#define fd(i, b, a)  for (int i = (b), _a = (a); i > _a; --i)
#define ALL(v)  (v).begin(), (v).end()
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

const int maxn = 1e9;

int binarySearch(int a[], int left, int right, int x){
    int mid = left + (right - left) / 2;

    if (a[mid] == x) return mid;
    if (a[mid] > x) return binarySearch(a, left, mid - 1, x);
    else return binarySearch(a, mid + 1, right, x);
    return -1;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int target; cin >> target;
    int result = binarySearch(a, 0, n, target);
     if (result != -1) {
        cout << "Phần tử " << target << " được tìm thấy tại vị trí " << result << endl;
    } else {
        cout << "Phần tử " << target << " không được tìm thấy trong mảng." << endl;
    }

    cerr << "\nNguyxn Truong: " << TIME << "s.\n";
    return(0);
}