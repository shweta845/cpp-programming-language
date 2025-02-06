#include<iostream>
using namespace std;
class student {
	public :
		int id;
	
	void set()
	{
		id=11;
	
		}
		void dis()
		{
			cout<<id<<endl;
			}	
};
class exam:public student
{
	public:
		int maths;
		int science;
		void set()
		{
			maths=20;
			science=30;
		}
		void dis()
		{
			cout<<maths<<endl<<science;
		}
};
class sports
{
	public:
		int marks;
	
};

class result:public sports
{
	public:
		int marks;
		void set()
		{
			marks=90;
		}
		void dis()
		{
			cout<<marks;
		}
	
};
int main ()
{

student obj1;
obj1.dis();
exam obj2;
obj1.set();
obj2.set();
obj2.dis();
result obj3;
obj3.dis();
}
