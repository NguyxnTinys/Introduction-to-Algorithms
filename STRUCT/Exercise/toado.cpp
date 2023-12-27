// ktra diem nao nam trong, tren ngoai bien cua hcn co 
// dai x rong = 15 x 14
#include <bits/stdc++.h>
using namespace std;

struct toado{
    float x;
    float y;
};
int main(){
    int n;
    cin >> n;
    int trong = 0, ngoai = 0, tren = 0;
    for (int i = 0; i < n; ++i){
        struct toado a;
        cin >> a.x >> a.y;
        if(abs(a.x) < 15 && fabs(a.y) < 14) trong++;
        else if (fabs(a.x) > 15 || fabs(a.y) > 14) ngoai++;
        else tren++;
    }
    cout << trong << " " << ngoai << " " << tren;
}