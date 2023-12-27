
#include <bits/stdc++.h>
using namespace std;
int n;
struct manager
{
    string cs; // code student: ma sinh vien
    string bird;
    double smt; // score mid term: diem giua ki
    double sft; // score final term: diem cuoi ki
    double ave; // average: diem trung binh
    int rank;
} a[50];

int count(int index)
{
    int dem = 0;
    for (int i = 0; i < index; ++i)
    {
        if (a[i].bird <= "1999")
            dem++;
    }
    return dem;
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].cs >> a[i].bird >> a[i].smt >> a[i].sft;
        a[i].ave = 0;
    }
    for (int i = 0; i < n; ++i)
    {

        a[i].ave = (a[i].sft + a[i].smt) / 2;
        cout << a[i].cs << "______" << a[i].ave << endl;
    }
    cout << count(n) << endl;
}