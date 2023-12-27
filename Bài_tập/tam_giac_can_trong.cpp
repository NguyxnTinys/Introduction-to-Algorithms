/*      when i and j run for 1 to n
*           i = 1, j = 1
**          i = 2, j = 1, 2
* *         i = 3, j = 1, 3
*  *        i = 4, j = 1, 4
*****       i = 5, j = 1, 2, 3, 4, 5
type: j == 1 || i == j || i == n



when i and j run for 0 to n - 1
ALGORITHM
 */#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "nhap: ";
    cin >> a;
    for(int i = a; i > 0; i--){ 
        for(int j = 0;j < i - 1 ; j++){
            cout << " ";
        }
        for(int k = a; k >= i ; k--){
            if(k == a || i == 1){
                cout << "*";
            } else cout << " ";
        }
        for(int u = i  ; u < a; u++){
            if(i == 1 || u == a - 1 ){
                cout << "*";
            } else cout << " ";
        }
        cout << endl;
    }
}