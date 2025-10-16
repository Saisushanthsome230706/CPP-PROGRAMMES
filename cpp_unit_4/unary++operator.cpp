#include<iostream>
using namespace std;
class counter
{
	int count;
	public:
		counter(int c=0)
		{
			count=c;
		}
		counter operator++()
		{
			++count;
			
		}
		void display()
		{
			cout<<"count:"<<count<<endl;
		}
};
int main(){
	counter c1(5);
	++c1;
	c1.display();
	return 0;
}

