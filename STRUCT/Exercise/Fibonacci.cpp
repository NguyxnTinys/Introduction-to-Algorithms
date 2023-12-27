//day   : 1 1 2 3 5 8 13 21 ...
// stt(n): 0 1 2 3 4 5  6  7 ...
// de toi uu chuong trinh thi khong nen  dung struct
#include <bits/stdc++.h>
using namespace std;

struct Fibonacci {
  int f0;
  int f1;
  int fn;
};

int main() {
  int n;
  cout << "Nhap n: ";
  cin >> n;

  Fibonacci fibonacci;
  fibonacci.f0 = 1;
  fibonacci.f1 = 1;

  for (int i = 2; i <= n; i++) {
    fibonacci.fn = fibonacci.f0 + fibonacci.f1;
    fibonacci.f0 = fibonacci.f1;
    fibonacci.f1 = fibonacci.fn;
  }

  cout << "So hang thu " << n << " cua day Fibonacci la: " << fibonacci.fn << endl;

  return 0;
}

//? de quy(main2)
// int fbnc(int index){
//    if(index == 0 || index == 1) return 1;
//    return fbnc(index  - 2) + fbnc(index - 1);
// }

//? HAM(main2)
// int fbnc(int index){
//     if(index == 0 || index == 1) return 1;
//     int fn_2 = 0;
//     int fn_1 = 1;
//     int fn = 0;
//     while(index > 0){
//         fn = fn_1 + fn_2;
//         fn_2 = fn_1;
//         fn_1 = fn;
//         index--;
//     }
// }
//? main2
// int main(){
//     int n;
//     cin >> n;
//     cout << fbnc(n);
// }