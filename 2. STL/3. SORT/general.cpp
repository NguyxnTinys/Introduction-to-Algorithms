// Define: #include <algorithm>

// syntax: sort(begin__<1>, end__<2>, tieu chi sx__<3>);
// Neu <3> khong dien gi o tieu chi thi se la tang dan (increase)
// Neu <3>: greater<int>(): sap xep giam dan (decrease)

// =========================================================================================
/*
    vd: int a[6] = {1, 2, 5, 3, 7, 9};
    sort(a + 0, a + 6); // sap xep mang co 6 phan tu

*/
// =========================================================================================
    //complexity to sort: O(nlogn)
// =========================================================================================

    // Tu cai dat tieu chi sap xep
    // compare the value of two elements to each other
    // a is the preceding element and b is the following element

    // Example: sort descending
bool cmp(int a, int b){
   if (a > b) return true; // giu nguyen vi tri a va b
    else return false;      // swap two elements
}

// =========================================================================================
#include <bits/stdc++.h>
using namespace std;
// =========================================================================================
int main(){
    vector<int> v1, v2;
    int n; cin >> n;
    for (int i = 0; i < n; ++i){
        int x; cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; ++i){
        int x; cin >> x;
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end()); // increase
    // sort(v2.begin(), v2.end(), greater<int>()); // decrease
    sort(v2.begin(), v2.end(), cmp);
    for (auto x : v1){
        cout << x << " ";
    }
    cout << "\n";
    for (auto x : v2){
        cout << x << " ";
    }
}
// =========================================================================================
    // stable_sort(); // tuong tu sort tuy nhien se giu nguyen duoc thu tu nhu luc nhap doi
    // voi cac gia tri tuong duong
    // Complexity to stable_sort: O(n*logn*logn) || O(n*log^2(n))
// =========================================================================================