#include<iostream>
using namespace std;
int test(int a,int b)
{
	int c=100;
	return a+b+c;
}

void main()
{
	
	int rst;
	int a=10,b=20;
	rst=test(a,b);
	system("pause");
}