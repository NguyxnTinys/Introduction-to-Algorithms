// ***struct là một kiểu dữ liệu bao gồm nhiều thành phần
// và các thành phần có thể thuộc nhiều kiểu dữ liệu khác nhau

#include <bits/stdc++.h>
using namespace std;

// define struct
// struc sinh vien
// include: ten, gpa, dia_chi, msv
struct SinhVien
{
    string ten;
    string msv;
    string dia_chi;
    double gpa;
};

int main()
{
    // declaring a structure
    struct SinhVien x; // c can co struct trc SinhVien x;
    // trong c++ the keyword is not mandatory ;-> SinhVien x;
    getline(cin, x.ten);
    cin >> x.msv;
    cin >> x.gpa;
    cin.ignore();
    getline(cin, x.dia_chi);
    cout << x.ten << " " << x.msv << " " << fixed << setprecision(1) << x.gpa << endl;
    cout << x.dia_chi << endl;
    return 0;
}
