#include<iostream>
using namespace std;
template<typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	cout<<"for integer numbers :"<<add<int>(3,5);
	cout<<"for float numbers :"<<add<int>(3.5,2.5);
}
