#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"base class constructor called"<<endl;
		}
		~Base()
		{
		    cout<<"base class destructor called"<<endl;	
		}
};
class derived1: public Base
{
	public:
		derived1()
		{
			cout<<"derived1 class constructor called"<<endl;
		}
		~derived1()
		{
			cout<<"derived1 class destructor called"<<endl;
		}
};
class derived2: public derived1
{
	public:
		derived2()
		{
			cout<<"derived2 class constructor called"<<endl;
		}
		~derived2()
		{
			cout<<"derived2 class destructor called"<<endl;
		}
};
int main()
{
	cout<<"creating object of derived2 class..."<<endl;
	derived2 obj;
	cout<<"existing main..."<<endl;
	return 0;
}
