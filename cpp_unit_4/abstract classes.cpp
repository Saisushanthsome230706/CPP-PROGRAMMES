#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void draw()
		{
			cout<<"Drawing shape"<< endl;
		}
};
class circle : public shape
{
	public:
		void draw()
		{
			cout<<"Drawing circle"<< endl;
		}
};

class square : public shape
{
	public:
		void draw()
		{
			cout<<"Drawing square"<< endl;
		}
};


int main()
{
	
	shape* shapePtr;
	
	circle c;
	square s;
	
	shapePtr = &c;
	shapePtr->draw();
	
	shapePtr = &s;
	shapePtr->draw();
	
	
	
	
	
	return 0;
}


