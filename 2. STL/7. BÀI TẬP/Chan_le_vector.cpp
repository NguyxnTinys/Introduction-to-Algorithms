#include <bits/stdc++.h>
 
int main(){
    std :: vector<int> b;
    std :: vector<int> c;
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i ){
        scanf("%d", &a[i]);
        if(a[i] < 0){
            b.push_back(a[i]);
        }else c.push_back(a[i]);
    }
    for(auto &x : b) printf ("%d ", x);
    printf("\n");
    for(auto &x : c) printf("%d ", x);
}   