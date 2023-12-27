// Define: #include <vector>

//============================================================================
// syntax: vector<int> A(10); // trong A da co 10 gia tri 0
// vector<int> C{1, 2, 3, 4, 5, 6, 7};
// vector<int> B(A);
//============================================================================
// A.push_back(5); them phan tu 5 vao vector A
// A.pop_back();  bo di 1 phan tu  cuoi cung cua vector
// A.clear(); bo di tat cac cac phan tu cua vector
// A.front(); de lay ra phan tu dau tien cua vector
// A.back(); de lay ra phan tu cuoi cung cua vector
// A.at(n); lay ra phan tu vi tri thu n cua vector

// A.size(); de lay ra do dai cua vector
// A.resize(n); thay doi so phan tu cua vector(co n phan tu)

// A.empty(); de biet vector co phan tu hay khong
// reverse(A.begin, A.end()); dao nguoc cac gia tri trong vector
// A.erase(iterator); dung de xoa 1 gia tri bat ki, tuy nhien phai su dung iterator
// A.assign(NE, value); gan cac phan tu cua vector voi cung mot gia tri  //ne: number of element
#include <bits/stdc++.h>
using namespace std;

//============================================================================
// // Duyet bang iterator

    // vector<int>::iterator i; //khai bao con tro de duyet
    // for(i = A.begin(); i != A.end(); i++){
    //     cout << *i << endl;
    // }

//============================================================================
// // Duyet bang iterator
    // for (int i = 0; i < a.size(); ++i){
    //     vector<int> :: iterator x = a.begin() + i;
    //     cout << *x << " ";
    // }

//============================================================================
// // Duyet bang chi so

// for(int i = 0; i < A.size(); i++){
//     cout << A[i] << endl;
// }

//============================================================================
// // Duyet bang for-each
// for(auto x : A){
//     cout << x << endl;
//   }

//============================================================================

// ham accumulate belong header file numeric
// ham accumulate(a.begin(), a.end(), 0); duoc su dung de tinh tong cua cac phan tu trong vector
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tong = 0;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
//============================================================================

    
//============================================================================
    // HAM ERASE
        // vector<int> :: iterator x = a.begin();
        // a.erase(x); // xoa gia tri x
        // // a.erase(l, r); xoa tu left den right cua vector
        // for (int i = 0; i < a.size(); ++i){
        //     cout << a[i] << " ";
        // }
        // cout << "\n";
//============================================================================
    // tong = accumulate(a.begin(), a.end(), 0);
    // cout << tong << endl;
    // return 0;
}
