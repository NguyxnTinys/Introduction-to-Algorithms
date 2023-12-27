#include <bits/stdc++.h>
using namespace std;
struct node{
    int date;
    struct node *next;
};
typedef struct node node;

node* makeNode(int x){
    node *newNode = new node();
    newNode-> date = x;
    newNode-> next = NULL;
    return newNode;
}

void push(node **top, int x){
    node *newNode = makeNode(x);
    newNode->next = *top;
    *top = newNode;
}
void pop(node **top){
    // TH dslk kh co node nao
    if ((*top) != NULL){
        node *tmp = *top;
        (*top) = tmp->next;
        delete tmp;
    }
}
int Top(node **top){
    if ((*top) != NULL) return (*top) -> date;
}
int size(node *top){
    int res = 0;
    while(top->next != 0){
        res++;
        top = top->next;
    }
    return res;
}
int main(){
    node *top = NULL;
     while(1){
    tt: cout << "-------------------------------------------------\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Size\n";
        cout << "0. Thoat";
        cout << "-------------------------------------------------\n";
        int lc; cout << "lua chon: "; cin >> lc;
        if(lc == 1){
        aa: int x; cout << "Nhap gia tri: "; cin >> x;
            push(&top, x);
        }else if(lc == 2){
            pop(&top); 
        }
        else if(lc == 3){
            cout << Top(&top) << "\n"; 
        }else if(lc == 4){
            cout << size(top) << "\n";
        }else {
            cout << "Nhap lai!........";
            goto tt;
        }
    }
}