#include <iostream>
using namespace std;
class A 
{
	public:
		void displayA()
		{
			cout<<"this is class A (base class - Single inheritance)"<<endl;
		}
};
class B : public A
{
	public:
		void displayB()
		{
			cout<<"this is class B (derived from A - Single inheritance)"<<endl;
		}		
};
class X
{
	public:
		void displayX()
		{
		    cout<<"this is class X (base class for multiple inheritance)"<<endl;	
		}
};
class Y
{
    public:
		void displayY()
		{
		    cout<<"this is class Y (base class for multiple inheritance)"<<endl;	
		}	
};
class Z : public X,public Y
{
	public:
		void displayZ()
		{
		    cout<<"this is class Z (derived from X and Y - multiple inheritance)"<<endl;	
		}	
};
class parent
{
	public:
		void displayparent()
		{
		    cout<<"this is parent class ( multi-level inheritance)"<<endl;	
		}	
};
class child : public parent
{
	public:
		void displaychild()
		{
		    cout<<"this is child class (derived from parent)"<<endl;	
		}	
};
class grandchild : public child
{
	public:
		void displaygrandchild()
		{
		    cout<<"this is grandchild class (derived from child - milti-level)"<<endl;	
		}
};
class base
{
	public:
		void displaybase()
		{
			cout<<"this is base class (hierarchical inheritance)"<<endl;
		}
};
class derived1: public base
{
	public:
		void displayderived1()
		{
			cout<<"this is derived1 (from base)"<<endl;
		}
};
class derived2: public base
{
	public:
		void displayderived2()
		{
			cout<<"this is derived2 (from base)"<<endl;
		}
};
class M
{
	public:
		void displayM()
		{
			cout<<"this is class M (base of hybrid inheritance)"<<endl;
		}
};
class N : public M
{
	public:
		void displayN()
		{
			cout<<"this is class N (derived from M)"<<endl;
		}
};
class O
{
	public:
		void displayO()
		{
			cout<<"this is class O ( independent base of hybrid inheritance)"<<endl;
		}
};
class P: public N,public O
{
	public:
		void displayP()
		{
			cout<<"this is class P(derived from both N and O - hybrid)"<<endl;
		}
};
int main()
{
	cout<<"\n----single inheritance---"<<endl;
	B b;
	b.displayA();
	b.displayB();
	
	cout << "\n---- Multiple Inheritance ----" << endl;
    Z z;
    z.displayX();
    z.displayY();
    z.displayZ();

    cout << "\n---- Multi-level Inheritance ----" << endl;
    grandchild gc;
    gc.displayparent();
    gc.displaychild();
    gc.displaygrandchild();

    cout << "\n---- Hierarchical Inheritance ----" << endl;
    derived1 d1;
    derived2 d2;
    d1.displaybase();
    d1.displayderived1();
    d2.displaybase();
    d2.displayderived2();

    cout << "\n---- Hybrid Inheritance ----" << endl;
    P p;
    p.displayM();   
    p.displayN();
    p.displayO();
    p.displayP();

    return 0;
}
