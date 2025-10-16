#include<iostream>
using namespace std;
class Address
{ 
  string city;
public:
	Address(string c) {city =c; }
	void show() {cout<<"city:"<<city<<endl; }
};
class student
{ 
  string name;
  Address addr;
  public:
  	student(string n,string c) : name(n),addr(c) {}
  	void display()
  	{
  		cout<<"name"<<name<<endl;
  		addr.show();
	  }
};
int main()
{
	student s("sushanth","hyderabad");
	s.display();
	return 0;
}
