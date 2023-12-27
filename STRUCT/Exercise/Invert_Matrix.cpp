#include <bits/stdc++.h>
using namespace std;

const int NN = 50;
float a[NN][NN];
int n;

int main() {
  // Read the matrix from the user.
  cout << "Nhap N: ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "A[" << i << "," << j << "]= ";
      cin >> a[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j];
    }
    cout << "\n";
  }

  // Invert the matrix.
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      float c = a[i][j];
      a[i][j] = a[n - i + 1][j];
      a[n - i + 1][j] = c;
    }
  }

  // Print the inverted matrix.
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n; j++) {
      cout << fixed << setw(5) << setprecision(2) << a[i][j] << ' ';
    }
    cout << "\n";
  }

  return 0;
}
