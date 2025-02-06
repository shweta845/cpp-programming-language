#include<iostream>
using namespace std;
class one
{
	public:
		int a;
};
class two
{
	public:
		int b;
};
class three:public one,two
{
	public:
		int c;
		void set()
		{
			a=4;
			b=5;
			c=10;
			
		}
		void display()
		{
			cout<<a<<endl<<b<<endl<<c;
		}
};
int main()
{
	three obj1;
	obj1.set();
	obj1.display();
	
	}
