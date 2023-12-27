
// convert number to string
// c1: stringstream
        // int number x = 12345678;
        // stringstream ss;
        // ss << x;
        // string snum = ss.str();
// c2: sprintf()
// c3: itoa()
// c4: to_string
        // int number = 12345;
        // std::string strNumber = std::to_string(number);
//======================================================

// s.push_back(x);
// s.pop_back();
// s.insert(index, x)

// s.erase(index); xoa tu phan tu index den cuoi string
// s.erase(index, cnt); xoa cnt ki tu ke tu phan tu index

// CAT RA XAU CON
// substr(index);
// substr(index, cnt);

// s.find(x); tim xem string t co phai la string con cua string s kh
            //neu khong thay thi tra ve string :: npos
//======================================================

// isdigit(char c); ktra chu so
// islower(char c); ktra chu thuong
// isupper(char c); ktra chu hoa
// isalpha(char c); ktra chu cai
// s[i] = tolower(s[i]);
// s[i] = toupper(s[i]);

//======================================================
        // CHUYEN CHUOI THANH SO
        // int n = stoi(s); string to integer
        // long long n = stoll(s); string to long long 
        // double d = stod(s);

//======================================================
        // CHUYEN SO THANH CHUOI
        // int n = 93897;
        // string s = to_string(n);
#include <bits/stdc++.h>
using namespace std;

int main(){
    
//======================================================
// 1. INPUT
    // string s;
    //Doc tung tu cua input
    // while (cin >> s){
    //     cout << s << "\n";
    //     cin.ignore();
    // }
    // cout << "\n\n";

    // // Doc tung dong
    // string res = "";
    // while (getline(cin, s)){
    //     cin.ignore();
    //     res += s + "\n";
    // }
    // cout << res;
//======================================================
// 2. OUTPUT
    // string a = "Nguyxn Van Truong";
    // // c1: nomal
    //     cout << a;
    // // c2: index
    //     for(int i = 0; i < a.size(); ++i){
    //         cout << a[i];
    //     }
    // // c3: for each // Range base for loop
    //     for (auto x : a){
    //         cout << x;
    //     }
    // // c4 iterator
    //     for (auto i = a.begin(); i != a.end(); ++i){
    //         cout << *i;
    //     }
//======================================================
// 3. FIND
    // string s = "Nguyxn Van Truong";
    // string t = "Truong";
    // if (s.find(t) != string::npos){
    //     cout << "FOUND!!";
    //     // tra ve vi tri dau tien tim thay chuoi
    //     cout << s.find(t);
    // }else cout << "NOT FOUND";
//======================================================

}