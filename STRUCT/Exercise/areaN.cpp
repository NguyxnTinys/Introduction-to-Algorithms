#include <bits/stdc++.h>

using namespace std;

int N;

struct Rectangle // Cấu trúc lưu thông tin về hình chữ nhật.
{
    int length; // Chiều dài.
    int width;  // Chiều rộng.
    int area;   // Diện tích.
} rec[50];      // Định nghĩa một mảng chứa các hình chữ nhật.

void get_area(Rectangle &rec) // Tính diện tích của một HCN.
{
    rec.area = rec.length * rec.width;
}

int main()
{

    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        cin >> rec[i].length >> rec[i].width;

        get_area(rec[i]); // Truyền tham trị để cập nhật trực tiếp diện tích lên thành viên area của biến rec[i].
    }

    for (int i = 1; i <= N; ++i)
    {
        cout << "Diện tích hình chữ nhật thứ " << i << " là: ";
        cout << rec[i].area << endl;
    }
}
