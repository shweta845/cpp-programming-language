#include<iostream>
using namespace std;
class one
{
	public:
		int a;
		void set()
		{
			a=3;
		}
		void display()
		{
			cout<<a;
		}
};
class two:public one
{
public:
int b;
void set1()
{
	b=4;
}
	
	void display1()	
	{
		cout<<b;
	}
};
class three:public two
{
	public:
		int c;
		void set()
		{
			c=6;
			
		}
		void display()
		{
			cout<<c;
		}
};
int main()
{
	three obj1;
	obj1.set();
	obj1.display();
	obj1.set1();
	obj1.display1();
	
	three obj2;
	obj2.set();
	obj2.display();
	obj2.set1();
	obj2.display1();
	
}
