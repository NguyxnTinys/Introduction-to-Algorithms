#include <bits/stdc++.h>
using namespace std;
// Neu mang da duoc sap xep ma ta can tim kiem phan tu X
    // binary_search(a.begin(), a.end(), x); // O(logn)
    // binary_search(a, a + n, x);


//==========================================================
// Bien the cua binary_search
/*  MANG VA VECTOR DA DUOC SAP XEP THEO THU TU
    ?? Neu co mot mang, tim X co xuat hien trong mang hay khong?

        !! DOI VOI ARRAY: tra ve con tro tro
            lower_bound(a, a + n, x); 
            upper_bound(a, a + n, x); 

        !! DOI VOI VECTOR: tra ve iterator 
            lower_bound(a.begin(), a.end(), x);
            upper_bound(a.begin(), a.end(), x);

    ?? Neu khong tim thay => tra ve a + n || a.end()
*/

// lower_bound: tra ve vi tri dau tien den phan tu lon hon hoac 
//              bang X o trong mang hay vector
// VD:  input: 1 2 3 3 3 4 5 9
//      tim phan tu >= 6
//      output: 9


// upper_bound: tra ve vi tri dau tien den phan tu lon hon X

int main(){
    int n;
    cin >> n;   // input 1: 8
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];    
    }
    // input2: 1 2 3 3 3 4 5 9
    int x;
    cin >> x;   // input3: 3
    auto it1 = upper_bound(a, a + n, x); // a + 2
    cout << "Value: " << *it1 << " \n";
    // De biet chi so cua X
    cout << "Index: " << (it1 - a) << " ";
}