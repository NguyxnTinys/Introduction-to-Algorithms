// Define: #include <set>
// Set: are a type of associative container in which each element has to be unique 
    // The value are stored in a specific sorted order (ascending or descending)

// =====================================================================================================
// Syntax: std::set<data_type> set_name; // increase or ascending
// Syntax: std::set<data_type, greater<data_type>> set name; //decrease or descending

// =====================================================================================================

    // We are using a custom comparator in place of greater<data_type>
    // We can use an unordered_set in place of set, but the elements in the set won't be sorted

// =====================================================================================================
#include <bits/stdc++.h>
using namespace std;

// =====================================================================================================
    /*
    E.g:    std::set<int> s;
    s.insert(x): the mot gia tri x vao set
    s.size(): tra ve kich thuoc cua set
    s.begin();
    s.end();
    s.clear();
    s.empty();
    s.erase(value);
    s.find(const value);
    s.count(const value);
    lower_bound(const value): 
    upper_bound(const value)
    distance(s.begin(), x); // khoang cach
    */

// =====================================================================================================
int main(){
    set<int> s;
    int n; cin >> n;
    for (int i = 0; i < n; ++i){
        int x; cin >> x;
        s.insert(x);
    }
    cout << endl;
    // s.clear();
    // if (s.empty()) cout << "yes";
    // else cout << "no";

// =====================================================================================================
    // Truy cap cac phan tu
    // c1:
        // for (auto x : s){
        //     cout << x << " ";
        // }
    // c2: truy cap bang iterator ?? su dung con tro
        // set<int>::iterator x;
        // for (x = s.begin(); x != s.end(); ++x){
        //     cout << *x << " ";
        // }
    // c3:displaying set using iterator 
        // set<int>::reverse_iterator x;
        // for (x = s.rbegin(); x != s.rend(); ++x){
        //     cout << *x << " ";
        // }

// =====================================================================================================
    // auto x = s.begin(); 
    // auto y = s.rbegin();
    // cout << s.count(*x) + s.count(*y);

// =====================================================================================================
// Tim kiem phan tu
    // int x; cin >> x;
    // auto it = s.find(x);
    // if(it != s.end()) cout << "YES";
    // else cout << "NO";

// =====================================================================================================
// Xoa mot phan tu trong set:
    // Co the la xoa value || iterator
    int x; cin >> x;
    auto it = s.find(x);
    if(it != s.end())
        s.erase(it);

// =====================================================================================================
    // iterator in set can use operator ++ or --
// =====================================================================================================
/*
multiset: khac voi set, multiset co the luu tru cac gia tri giong nhau
vd: input:
            5
            1 2 5 3 2 5 3
    output:
            1 2 2 3 3 5 5
    E.g:    std::multiset<int> s;
*/
// =====================================================================================================
/*
unordered_set: giong set: deu luu cac value unique tuy nhien khong sap xep
*/
// =====================================================================================================
}