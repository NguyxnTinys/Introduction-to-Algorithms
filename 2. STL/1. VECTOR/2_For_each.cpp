// for each: Range base for loop (c++11 tro len)
// dung de duyet GIA TRI cua cac phan tu trong container 

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i< n; ++i){
		cin >> a[i];
	}

// ===========================================================================
	// tuy nhien de gan cac phan tu su dung for-each can luu y
	//? THAY DOI GIA tRI TRONG CONTAINER
	// KHONG THE DUNG
		for (int i : a){
			i = 100; //kh dung nhu nay de gan tat ca cac phan tu bang 100
		}
	// PHAI DUNG
	// c1: van duyet va thay doi tuy nhien se khong lam thay doi gia tri 
		// thuc te cua mang ma chi la temporary

		// for (int i : a){
		// 	i = 100; 
		// 	cout << i << " ";
		// }

	// c2:
		// tham chieu de tro vao dia chi luu gia tri cua bien moi co the thay doi

		// for (int &i : a){ 
		// 	i = 100; 	
		// }
	// c3:
		// su dung chi so

		// for (int i = 0; i < n; ++i){
		// 	a[i] = 100;
		// }
// ===========================================================================
	// duyet cac phan tu
		for (int i : a){
		cout << i << " ";
	}
	return 0;
}