// Chi thi #pragma startup & #pragma exit || #pragma GCC poison
/*
    Dung de chi thi cho chuong trinh biet function nao se duoc
    thuc thi truoc ham main(). Tuy nhien, cac pragma nay se kh
    chay duoc trong gccn (MinGW)
*/
#include<bits/stdc++.h>
using namespace std;

void func1();
void func2();

// Chi thi pragma
#pragma startup func1   //func1 se duoc thuc thi truoc ham main()
#pragma exit func2      //func1 se duoc thuc thi sau ham main()


// Chi thi #pragma
#pragma GCC poison cout;    // Loai bo tu khoa cout 
void func1()
{
    printf("Inside func1()\n");
}

void func2()
{
    printf("Inside func2()\n");	
}

int main()
{
    printf("Inside main()\n");
	return 0;
}