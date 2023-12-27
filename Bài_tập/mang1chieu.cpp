#include <bits/stdc++.h>

using namespace std;
const int Max = 366; // gia thiet N lon nhat la 366
typedef float Kmang1[Max];
Kmang1 nhietdo;
int dem, i, n;
float tong, trungbinh;

int main()
{
    cout << "Nhap so ngay: ";
    cin >> n;
    tong = 0;
    for (i = 0; i < n; i++)
    {
        cout << "Nhap nhiet do ngay " << i + 1 << ": ";
        cin >> nhietdo[i];
        tong += nhietdo[i];
    }
    dem = 0;
    trungbinh = tong / n;
    for (i = 0; i < n; i++)
        if (nhietdo[i] > trungbinh)
            dem++;
    cout << "Nhiet do trung binh " << n << " ngay: ";
    cout << fixed << setw(8) << setprecision(3) << trungbinh << endl;
    cout << "So ngay nhiet do cao hon trung binh: " << dem;
    return 0;
}