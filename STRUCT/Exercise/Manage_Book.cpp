/*
	MANAGE BOOK: name, author, year, cost, cnt
	1. Output: List the book
	2. Total cost of book
	3. Sort the list by the year of manufacture and print the results of the screen
	4. Print the book have cost less then equal 10000 and year of manufucture after 20000 
*/
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#define nguyxn signed main()
#define ALL(v)  (v).begin(), (v).end()
#define REP(i, n)  for (int i = 0, _n = (n); i < _n; ++i)
#define FOR(i, a, b)  for (int i = (a), _b = (b); i <= _b; ++i) 
#define FORD(i, b, a)  for (int i = (b), _a = (a); i >= _a; --i)
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

using namespace std;
const int maxn = 1e9;
// mb = manage book
struct mb{
	string name;	// ten sach
	string author; 	// tac gia
	int year;		// nam xuat ban
	int cost;		// gia tien
	int cnt;		// so luong cua 1 loai sach
	// mb(string ten, string tg, int nam, int gia, int sl): name(ten), author(tg), year(nam), cost(gia), cnt(sl) {}
	mb(string ten, string tg, int nam, int gia, int sl) {
		name = ten;
		author = tg;
		year = nam;
		cost = gia;
		cnt = sl;
	}
};

//  Sap xep
bool cmp(pair<int, mb> &a, pair<int, mb> &b){
	return a.second.year > b.second.year;
}

signed main(){
	// cout << "Nhap so luong sach: ";
    int n;
    cin >> n;
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    vector<pair<int, mb>> vp;
    // cout << "_______NHAP THONG TIN SACH_______\n";
    for (int i = 1; i <= n; ++i){
		string name, author;
		int year, cost, cnt;
		cin.ignore(1);
    	// cout << "Nhap ten cuon thu " << i << ": ";
    	getline(cin, name);
    	// cout << "\n		Nhap ten tac gia: ";
    	getline(cin, author);
    	// cout << "\n		Nhap nam xuat ban: ";
    	cin >> year;
    	// cout << "\n		Nhap gia tien cua mot cuon: ";
    	cin >> cost;  
    	// cout << "\n		Nhap so luong: "; 
    	cin >> cnt;

    	vp.push_back(make_pair(i, mb(name, author, year, cost, cnt)));  	
    }
    cout << "1.______________\n";
    for (auto &x : vp){
    	cout << x.second.name << " " << x.second.author 
		<< " " << x.second.year << " " << x.second.cost 
		<< " " << x.second.cnt << " " << "\n";
    }
    cout << "2.______________\n";
    int ans = 0;
    for (auto &t : vp){
    	ans += t.second.cost;
    }
    cout << ans << "\n";
    cout << "3.______________\n";
    sort(ALL(vp), cmp);
    for (auto &x : vp){
    	cout << x.second.name << " " << x.second.author 
		<< " " << x.second.year << " " << x.second.cost 
		<< " " << x.second.cnt << " " << "\n";
    }

    cout << "4.______________\n";
    for (auto &x : vp){
    	if(x.second.cost <= 50000 && x.second.year >= 2000)
    		cout << x.second.name << " ";
    }
    cerr << "Nguyxn Truong: " << TIME << "s.\n";
    return(0);
}