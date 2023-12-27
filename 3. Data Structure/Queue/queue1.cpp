#include <bits/stdc++.h>
using namespace std;

int a[100000], maxN = 100000;
int n;

int size(){
    return n;
}

bool empty(){
    return n == 0;
}

void dequeue(int x){
    if(n == maxN) return;
    a[n] = x; ++n;
}

void pop(){
    if(n == 0) return;
    for (int i = 0; i < n; ++i){
        a[i] = a[i + 1];
    }
    --n;
}

int front(){
    return a[0];
}

int main(){
     while(1){
    tt: cout << "-------------------------------------------------\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Front\n";
        cout << "4. Size\n";
        cout << "5. Duyet\n";
        cout << "6. Empty\n";
        cout << "0. Thoat";
        cout << "-------------------------------------------------\n";
        int lc; cout << "lua chon: "; cin >> lc;
        if(lc == 1){
        aa: int x; cout << "Nhap gia tri: "; cin >> x;
            dequeue(x);
        }else if(lc == 2){
            pop(); 
        }
        else if(lc == 3){
            if (empty()){
                cout << "Chua push\n";
                goto aa;
            } else cout << front() << "\n"; 
        }else if(lc == 4){
            cout << size() << "\n";
        }else if(lc == 5){
            for (int i = 0; i < n; ++i){
                cout << a[i] << " ";
            }
        }else if(lc == 6){
            cout << empty() ? cout << "Khong co gia tri nao" : cout << "Da co gia tri" << "\n";
        }else {
            cout << "Nhap lai!........";
            goto tt;
        }
    }
}