#include<iostream>
using namespace std;
class one
{
	int a,b;
	static int c;
	public:
	void set(int x,int y)
	{
		a=x;
		b=y;
		
	}
	 void display()
	{
		cout<<a<<" "<<b<<" "<<c<<" "<<endl;
	}
	static void print()
	{
		cout<<c<<endl;
		
	}
	
};
int one::c;
int main()
{
	one ob1;
	ob1.set(2,3);
	ob1.display();
	ob1.print();
	one::print();
}

