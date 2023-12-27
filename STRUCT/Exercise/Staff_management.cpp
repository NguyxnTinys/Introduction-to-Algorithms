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
const int h = 7000000;

// staff management
struct sm{
    string name;
    int age;
    double cs;  //coefficients salary
    int as;     // allowance  salary
    int salary;
    sm(string ten, int tuoi, double heso, int phucap, int thuNhap){
        name = ten;
        age = tuoi;
        cs = heso;
        as = phucap;
        salary = thuNhap;
    }
};

bool cmp(sm &a, sm &b){
    return a.name < b.name;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<sm> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        string name;
        int age, as, salary;
        double cs;
        cin.ignore(1);
        getline(cin, name);
        cin >> age >> cs >> as;
        salary = cs * h + as;
        v.push_back({name, age, cs, as, salary});
    }

    for (auto x : v){
        if (x.age <= 30)cout << x.name << " " << x.age
                             << " " << x.cs << " " << x.as
                             << " " << x.salary << "\n\n";
    }
    cout << endl;
    sort(v.begin(), v.end(), cmp);
    for (auto x : v){
        cout << x.name << " " << x.age << " " << x.cs << " " << x.as << " " << x.salary << "\n\n";
    }
    cerr << "Nguyxn Truong: " << TIME << "s.\n";
    return(0);
}