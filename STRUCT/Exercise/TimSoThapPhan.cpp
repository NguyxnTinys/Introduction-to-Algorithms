//! Viết chương trình nhập từ bàn phím xâu kí tự S có độ dài không quá 100. 
//! Hãy cho biết có bao nhiêu chữ số thập phân xuất hiện trong xâu S. 
//! Thông báo kết quả ra màn hình

#include <bits/stdc++.h>
using namespace std;

struct Decimal{
    string value;
};

int main(){
    struct Decimal x;
    cin >> x.value;
    //cout << x.value;
    int cnt = 0;
    for (auto a : x.value){
        if (a >= '0' && a <= '9'){
            cnt++;
        }
    }
    cout << cnt;
}