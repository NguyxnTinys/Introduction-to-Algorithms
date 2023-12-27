//pair : luu mot cap gia tri co cung hoac khac kieu
// Define: #include <utility>
// =========================================================================================
	// syntax1: pair<data_type_f, data_type_s> pair_name  (first, second);

	// syntax2: pair<data_type_f, data_type_s> pair_name;
	//          pair_name.first = data_first;
	//          pair_name.second = data_second;

	// syntax3: pair<data_type_f, data_type_s> pair_name = {first, second};

// =========================================================================================
	// make_pair: khoi tao gia tri
			// pair<data_type_f, data_type_s> pair_name;
			// pair_name = make_pair (value1,value2);
	// pair1.swap(pair2): swap hai noi dung cua hai pair, (same type)
			// swap pair1.first with pair2.first
			// swap pair1.second with pair2.second

// =========================================================================================
#include <bits/stdc++.h>
using namespace std;

// =========================================================================================
// Su dung pair ket hop voi vector:
// xu li cac bai toan nhap tung cap (toa do Oxy,....)
int main(){
	int n; cin >> n;
	vector<pair<int, int>> v;
	// pair<int, int> a[i]; // mang pair
	for (int i = 0; i < n; ++i){
		int x, y; cin >> x >> y;
		// v.push_back({x, y});
	}
	for (int i = 0; i < v.size(); ++i){
		cout << v[i].first;
	}

}
// =========================================================================================


// =========================================================================================
	// int main()
	// {
	// 	pair<int, int> pair1 = { 1, 2 };
	// 	int a, b;
	// 	tie(a, b) = pair1;
	// 	cout << a << " " << b << "\n"; // a = 1  && b = 2
		
	// 	pair<int, int> pair2 = { 3, 4 };
	// 	tie(a, ignore) = pair2;  // ignore => a = 3; b = 2 vi bo qua nen b khong duoc gan = 4

	// 	// prints old value of b
	// 	cout << a << " " << b << "\n";

	// 	// Illustrating pair of pairs
	// 	pair<int, pair<int, char> > pair3 = { 3, { 4, 'a' } };
	// 	int x, y;
	// 	char z;

	// 	// tie(x,y,z) = pair3; //Gives compilation error
	// 	// tie(x, tie(y,z)) = pair3; //Gives compilation error
	// 	// Each pair needs to be explicitly handled
	// 	tie(x,ignore) = pair3;
	// 	tie(y, z) = pair3.second;
	// 	cout << x << " " << y << " " << z << "\n";
	// }
// =========================================================================================