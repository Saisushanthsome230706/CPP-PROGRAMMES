#include<iostream>
using namespace std;
class number
{
	public: int value;
	number(int v=0)
	{
		value=v;
	}
	void operator++()
	{
		++value;
	}
	number operator+(number obj)
	{  number temp;
	   temp.value=value + obj.value;
	   return temp;	
	}
	void display()
	{
		cout<<"value"<<value<<endl;
	}
};
int main()
{
	number n1(5),n2(10),n3;
	cout<<"before unary operation:"<<endl;
	n1.display();
	++n1;
	cout<<"after unary operator(++n1):"<<endl;
	n1.display();
	n3=n1+n2;
	cout<<"after binary operation(n1+n2):"<<endl;
	n3.display();
	return 0;
}
