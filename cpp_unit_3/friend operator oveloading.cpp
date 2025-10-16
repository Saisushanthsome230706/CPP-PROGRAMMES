#include <iostream>
using namespace std;
class number
{
	public: int value;
	number(int v=0)
	{
		value=v;
	}
	friend number operator++(number &n);
	friend number operator+(number n1,number n2);
	void display()
	{
		cout<<"value:"<<value<<endl;
	}
};
number operator++(number &n)
{
	n.value++;
	return n;
}
number operator+(number n1, number n2)
{
    return number(n1.value + n2.value);
}
int main()
{
	number n1(5),n2(10),n3;
	cout<<"before unary operation:"<<endl;
	n1.display();
	++n1;
	cout<<"after unary operation (++n1):"<<endl;
	n1.display();
	n3=n1+n2;
	cout<<"after binary operation (n1+n2):"<<endl;
	n3.display();
	return 0;
}
