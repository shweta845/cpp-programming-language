#include<iostream>
using namespace std;
class one
{
	public:
		int a;

void set()
{
	a=5;
}
void display()
{
	cout<<a;
}
};
class two:public one{


	public:
	int b=10;
void set1()
{
	b=10;
}
void display1()
{
	cout<<b;
}
};
int main ()
{
	two obj1;
	obj1.set();
	obj1.display();
	obj1.set1();
	obj1.display1();
}
