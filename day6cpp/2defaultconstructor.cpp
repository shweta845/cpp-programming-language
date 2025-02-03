#include<iostream>
using namespace std;
class one 
{
	public:
		int a,b;
		one()
		{
			a=4;
			b=5;
			
		}
		void display()
		{
			cout<<a<<" "<<b<<endl;
		}
};
int main()
{
	one ob1,ob2,ob3;
	ob1.display();
	ob2.display();
	ob3.display();
}
