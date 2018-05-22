#include<iostream>
using namespace std;
int test(int a,int b)
{

	int c=3100;
	int d=100;
	int xx=1000;
	return a+b+c+d;
}

void main()
{
	
	int rst;
	int a=10,b=20;
	rst=test(a,b);
	system("pause");
}