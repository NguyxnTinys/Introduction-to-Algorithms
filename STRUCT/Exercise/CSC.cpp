//! Viết chương trình nhập từ bàn phím số nguyên dương N (N ≤ 100) và dãy A gồm N số nguyên
//! A1, A2,..., AN, có giá trị tuyệt đối không lớn hơn 1000. Hãy cho biết dãy A có phải là một cấp số cộng
//! hay không và thông báo kết quả ra mànhình.


#include <iostream>

using namespace std;

struct Term {
  int value;
  int d;
};

int main() {
  // Nhập số nguyên dương N
  int N;
  cout << "Nhập số nguyên dương N: ";
  cin >> N;

  // Nhập dãy A
  Term A[N];
  for (int i = 0; i < N; i++) {
    cout << "A[" << i << "]: ";
    cin >> A[i].value;
  }

  // Kiểm tra xem dãy A có phải là cấp số cộng hay không
  bool isArithmetic = true;
  A[1].d = A[2].value - A[1].value;
  for (int i = 2; i < N; i++) {
    if (A[i].value - A[i - 1].value != A[1].d) {
      isArithmetic = false;
      break;
    }
  }

  // Thông báo kết quả
  if (isArithmetic) {
    cout << "Dãy A là cấp số cộng." << endl;
  } else {
    cout << "Dãy A không phải là cấp số cộng." << endl;
  }

  return 0;
}