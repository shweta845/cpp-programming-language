#include<iostream>
using namespace std;
class one
{
	public:
		int a,b;
		one(int x,int y)
		{
			a=x;
			b=y;
		}
		one(one &ob1)
		{
			a=ob1.a;
			b=ob1.b;
		}
		void display()
		{
			cout<<a<<" "<<b<<endl;
		}
};
int main()
{
	one ob1(4,5);
	one ob2(ob1);
	ob2.display();
	
}
