#include <bits/stdc++.h>
using namespace std;

const int Max = 60;

struct HocSinh {
  string HoTen;
  string NgaySinh, DiaChi;
  float Toan, Van;
  char XepLoai;
  string masinhvien;
};

int main() {
  int n;
  cout << "Số lượng học sinh trong lớp N = ";
  cin >> n;
  cin.ignore(255, '\n');

  HocSinh Lop[Max];
    for (int i = 1; i <= n; i++) {
    cout << "Nhập thông tin về học sinh thứ " << i << ": " << endl;
    cout << "Ho va ten: ";
    getline(cin, Lop[i].HoTen);
    cout << "Ma sinh vien: ";
    getline(cin, Lop[i].masinhvien);
    cout << "Ngay sinh: ";
    getline(cin, Lop[i].NgaySinh);
    cout << "Dia chi: ";
    getline(cin, Lop[i].DiaChi);
    cout << "Diem Toan: ";
    cin >> Lop[i].Toan;
    cout << "Diem Van: ";
    cin >> Lop[i].Van;
    cin.ignore(255, '\n');

        if (Lop[i].Toan + Lop[i].Van >= 18) {
        Lop[i].XepLoai = 'A';
        } else if (Lop[i].Toan + Lop[i].Van >= 14) {
        Lop[i].XepLoai = 'B';
        } else if (Lop[i].Toan + Lop[i].Van >= 10) {
        Lop[i].XepLoai = 'C';
        } else {
        Lop[i].XepLoai = 'D';
        }
    }

     for (int i = 1; i <= n; i++){
        if(Lop[i].XepLoai == 'A')
            cout << setw(30) << Lop[i].HoTen << Lop[i].masinhvien << endl;
    }
  cout << "Danh sách xếp loại học sinh trong lớp:\n";
  for (int i = 1; i <= n; i++) {
    cout << setw(30) << Lop[i].HoTen << " - Xếp loại: " << Lop[i].XepLoai << endl;
  }
   
  return 0;
}