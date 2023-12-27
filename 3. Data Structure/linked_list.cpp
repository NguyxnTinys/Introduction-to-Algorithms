// 📌📌📌DANH SACH LIEN KET (linked list)
// ❓Define: dslk la mot cau truc du lieu duoc su dung de luu tru cac phan tu.

//: ============================================================================================================================================
#include <bits/stdc++.h>
using namespace std;


//: ============================================================================================================================================
// ❓Structure of node:
//      mot node bao gom: 1 date va 1 link.
//      moi node deu la cap phat dong, la mot pointer va quan li mot node khac.

// struct student{
//     string name;
//     string lop;
//     string diachi;
//     float gpa;
// };

struct node {
    int date;  // date (co the la: student x;).
    struct node* next; // link.
};

// tao mot node moi.
node* makeNode (int x){
    node *newNode = new node(); //! c: node *newNode = (node*)malloc(sizeof(node));
    newNode -> date = x;
    newNode -> next = NULL;
    return newNode;
}

//duyet => hien thi cac gia tri.
void llout(node *head){     //llout: in ra man hinh linked list
    while(head != NULL){
        cout << head -> date << " "; //! printf("%d", head->date);
        head = head -> next;
    }
}
//dem cac phan tu.
int size(node *head){
    int count = 0;
    while(head != NULL){
        ++count;
        head = head->next;
    }
    return count;
}

//: ============================================================================================================================================
//! them node vao DAU dslk su dung pointer.
int pushFront1(node **head, int x){
    //tao node moi.
    node *newNode = makeNode(x);
    //b1: cho link cua newNode tro vao phan head.
    newNode -> next = *head;    // *head (toan tu giải tham chiếu): dia chi cua node head trong dslk.
    //b2: cap nhat lai head = newNode;
    *head = newNode;
}
//! them node vao DAU dslk su dung pointer ket hop tham chieu(&).
int pushFront2(node *&head, int x){
    //tao node
    node *newNode = makeNode(x);
    newNode -> next = head;
    head = newNode;
}

//: ============================================================================================================================================
//. Them node vao CUOI dslk su dung pointer.
void pushBack1(node **head, int x){
    node *newNode = makeNode(x);  //tao node newNode.
    // Khi dslk chưa có node nào (head -> next == NULL) thì sẽ lỗi bộ nhớ (dòng while).
    // Tức là đk != là sai => không chạy ctrinh.
    // Còn khi dslk đã có ít nhất 1 node thì không nhất thiết cần đk if.
    if(*head == NULL){            
        *head = newNode; return;    //return; ở trong hàm void dùng để dừng khi head == NULL
    }                               // Tức là dslk rỗng.

    node *tmp = *head;      // gán *tmp = *head để không làm thau đổi địa chỉ của head.
    while(tmp->next != NULL){
        tmp = tmp->next;    // trỏ tmp đến cuối cùng nhằm mục đích thêm node vào cuối.
    }
    tmp->next = newNode;    // cho phần next của node trỏ vào newNode để tạo thành dslk.
    
}
//. them node vao CUOI dslk su dung pointer ket hop tham chieu(&).
void pushBack1(node *&head, int x){
    node *newNode = makeNode(x);
    if(head == NULL){            
        head = newNode; return;
    }

    node *tmp = head;      
    while(tmp->next != NULL){
        tmp = tmp->next;    
    }
    tmp->next = newNode;    
    
}

//: ============================================================================================================================================
//> Chen node vao giua dslk
void insert(node **head, int k, int x){
    int n = size(*head);
    if (k < 1 || k > n + 1) return;
    if (k == 1){
        // su dung pushFront();
        pushFront1(head, x); return;
    }
    node * tmp = *head;
    for (int i = 1; i <= k - 2; i++){
        tmp = tmp -> next; // tro vao vi tri thu k - 1
    }
    node *newNode = makeNode(x);
    newNode -> next = tmp -> next; // gan dia chi cua vi tri thu k vao newNode
    tmp -> next = newNode;         // gan gia tri cua newNode vao vi tri thu k
}
//: ============================================================================================================================================
//> Xoa phan tu DAU trong dslk
void popFront1(node **head){
    // Neu dslk chua co gia tri nao thi dung ct
    if (head == NULL) return;
    node *tmp = *head;  // tap bien tmp de giai phong du lieu cua node dau tien
    *head = (*head)->next;  // gan head vao node thu 2
    // Giai phong du lieus  
    delete tmp; //! c: free(tmp);
}
 
void popFront2(node *&head){
	if(head == NULL) return;
	node *temp = head;
	head = head->next;
	delete temp;
}

//: ============================================================================================================================================  
//> Xoa phan tu CUOI trong dslk
void popBack1(node **head){
    // TH dslk kh co node nao
    if (*head == NULL) return;
    node *tmp = *head;
    // TH dslk co mot node
    if(tmp -> next == NULL){
        *head = NULL; delete tmp;
        return;
    }
    while(tmp->next->next != NULL){
        tmp = tmp -> next;
    }
    node *last = tmp->next;
    tmp-> next = NULL;
    delete last;
}
 
void popBack2(node *&head){
	if(head == NULL) return;
	node *temp = head;
	if(temp->next == NULL){
		head = NULL; delete temp;
		return;
	}
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	node *last = temp->next; // node cuoi
	temp->next = NULL;
	delete last;
}
//: ============================================================================================================================================
//. Xoa phan tu ở giữa dslk
void erase(node **head, int k){
    if(*head == NULL) return;
    int n = size(*head);
    if(k < 1 || k > n) return;
    if(k == 1) popFront1(head); 
    node *tmp = *head;
    for (int i = 1; i < k - 2; ++i){
        tmp = tmp->next;
    }
    node *vtk = tmp -> next;    // node thu k
    tmp -> next = vtk -> next;  // ket noi vt k - 1 voi k + 1 
    delete vtk;                 // giai phong vi tri k
}

//: ============================================================================================================================================
//head duoc mac dinh la node dau tien.

int main(){
    struct node *head = NULL;
    for (int i = 0; i < 5; ++i){
        int x; cin >> x;
        //su dung pushBack or pushFront
    }
    llout(head);
    cout << "\n";
    cout << size(head);
    return 0;
}