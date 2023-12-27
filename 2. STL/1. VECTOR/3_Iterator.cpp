// ITERATOR are use to point at the memory addresses of STL containers
// they reduce the complexity and execution time of the program

// Define #include <iterator
// Declare: <containerSTL> :: iterator name = <begin>;

#include <bits/stdc++.h>
using namespace std;

// ===========================================================================

int main(){
	//declaring vector
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i){
		int x; cin >> x;
		v.push_back(x);
	}
// ===========================================================================
	// Declaring iterator to a vector
	vector<int> :: iterator x = v.begin();
// ===========================================================================
	/*we can use iterator to retrieve data using operators
	<x++ || ++x || x-- || --X || x = x - 1 || ...> 
	E.G
		x++;
		x += 2;
		x--;
		cout << *x;
	*/

// ===========================================================================
	// // Displaying vector elements using begin() and end()

		// for (x; x != v.end(); ++x){
		// 	cout << *x << " ";	//*x la giai tham chieu
		// }


	    // for (int i = 0; i < a.size(); ++i){
	    //     vector<int> :: iterator x = a.begin() + i;
	    //     cout << *x << " ";
	    // }

//============================================================================
	// FUNCTION USING ITERATOR

	int i, x;
	vector<int> :: iterator y = v.begin() + i; 	// v[i]
	cin >> i >> x;
	// #1: insert <Complexity: O(n)>
		v.insert(v.begin() + i, x); // insert value x into index i
	// #2 erase Complexity: O(n)>
		v.erase(v.begin() + i);		// remove the value located at index i
	
	return 0;
}