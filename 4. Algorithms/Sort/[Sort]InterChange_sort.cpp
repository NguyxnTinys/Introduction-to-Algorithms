/* Complexity: O(n^2)*/
#include <bits/stdc++.h>
using namespace std;

// void swap(int a[], int b[]){
//     a *= b;
//     b = a/b;
//     a = a/b;
// }
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int tmp = 0;
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            // cout << "( " << a[i] << "," << a[j] << " )" << "\n";
            if (a[i] < a[j]){
                // Sort1
                // tmp = a[i];
                // a[i] = a[j];
                // a[j] = tmp;

                // Sort2
                // a[i] *= a[j];
                // a[j] = a[i] / a[j];
                // a[i] = a[i] / a[j];
                
            }    
        }
    }
    for (int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    return 0;
}