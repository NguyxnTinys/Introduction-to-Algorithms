#include <iostream>
using namespace std;
int main(){
    int a[100][100];
    int m,n,i,j,u,v;
    cout << "nhap so hang: ";
    cin>>m;
    cout << "nhap so cot: ";
    cin>>n;
    cout << "nhap gia tri trong mang: ";
    for (i = 0;i<m;i++){
        for (j = 0;j<n;j++){
            
            cin >> a[i][j];
        }
    }
   for (i = 0;i<m;i++){
       cout <<"\n";
        for (j = 0;j<n;j++){
          cout << a[i][j];
        }
    }
    cout << endl;
     int min;
    min=a[0][0];
    int max;
    max=a[0][0];
    for(j=1;j<m;j++){
        if(a[0][j]>max){
            max=a[0][j];
        }
    }
   /* int min;
    min=a[0][0];
    for(i=1;i<n;i++)
    {
        if(a[i][0]<min)
        {
            min=a[j][i];
        } 
    }*/
    cout << "in ra so: "<<min;
    }