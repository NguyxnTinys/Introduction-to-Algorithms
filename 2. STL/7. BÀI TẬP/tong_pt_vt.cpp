#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vt;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vt.push_back(x);
    }
    int sum = 0;
    for(int i = 0; i < vt.size(); i++){
        sum += vt[i];
    }
    cout << "SUM = " << sum << endl;
    return 0;
}