#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

node *makeNode(int x){
    node *newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void dequeue(node **head, int x){
    node *newNode = makeNode(x);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    node *tmp = *head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void pop(node **head){
    if(head == NULL) return;
    node *tmp = *head;
    (*head) = (*head)->next;
    delete tmp;
}

int front(node *head){
    return head->data;
}

int size(node *head){
    int ans = 0;
    while(head != NULL){
        ++ans;
        head = head->next;
    }
    return ans;
}

bool empty(node *head){
    return head == NULL;
}

void llout(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    node *head = NULL;
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
            dequeue(&head, x);
        }else if(lc == 2){ 
             if (empty(head) == 1){
                cout << "Chua push\n";
                goto aa;
             } else  pop(&head);
        }
        else if(lc == 3){
            if (empty(head) == 1){
                cout << "Chua push\n";
                goto aa;
            } else cout << front(head) << "\n"; 
        }else if(lc == 4){
            cout << size(head) << "\n";
        }else if(lc == 5){
            llout(head);
        }else if(lc == 6){
            if (empty(head) == 1)
            cout << "Khong co gia tri nao\n";
            else cout << "Da co gia tri" << "\n";
        }else {
            cout << "Nhap lai!........";
            goto tt;
        }
    }
}