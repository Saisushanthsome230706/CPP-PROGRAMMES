#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"the sum is:"<<a+b<<endl;
}
void add(int a,int b,int c)
{
	cout<<"the sum of three numbers is:"<<a+b+c<<endl;
}
void add(int a,int b,int c,int d)
{
	cout<<"the sum of four numbers is:"<<a+b+c+d<<endl;
}
int main()
{
	add(2,3);
	add(2,3,4);
	add(2,3,4,5);
	return 0;
}
