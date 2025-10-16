#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,x1,x2,descriminant,realpart,imaginarypart;
	cout << "enter the values of a,b,c\n ";
	cin >> a >> b >> c;
	descriminant=b*b-4*a*c;
	if(descriminant>0)
	{
	   x1=(-b+sqrt(descriminant))/(2*a);
	   x2=(-b-sqrt(descriminant))/(2*a);
	   cout<<"the roots are real and different:";
	   cout<<"x1 = "<< x1<< endl;
	   cout<<"x2 = "<< x2<< endl;
		
		
	}
	else if(descriminant=0)
	{
		cout<<"The roots are real and equal";
		x1=b/(2*a);
		cout<<"x1 = x2 ="<<x1<<endl;
		
	}	
	else
	{
		realpart=-b/(2*a);
		imaginarypart=sqrt(-descriminant)/(2*a);
		cout<<"roots are complex and different"<<endl;
		cout<<"x1 ="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
		cout<<"x2 ="<<realpart<<"-"<<imaginarypart<<"i"<<endl;
		
	}
	return 0;
}


