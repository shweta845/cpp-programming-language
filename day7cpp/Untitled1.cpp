
#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		string name;
		void set()
		{
			cout<<"Enter the name:-";
			cin>>name;
			cout<<"Eneter the rollno:-";
			cin>>rollno;
		}
		void display()
		{
			cout<<name << " "<<rollno<<endl;
		}
		
};
class exam:public student
{
	public:
	int maths,physics;
	void set1()
	{
		cout<<"marks:";
		cin>>maths;
		cout<<"marks";
		cin>>physics;
	}
	void display1()
	{
		cout<<maths<<" "<<physics<<endl;
	}
};
class sports:public student
{
	public:
		int sport1, sport2;
		void set2()
		{
			cout<<"sports marks 1:";
			cin>>sport1;
			cout<<"sports marks 2:";
			cin>>sport2;

		}
		void display2()
		{
			cout<<sport1<<" "<<sport2<<endl;
		}
};
class result:public exam,public sports
{
	public:
		int tmarks;
		
};
int main()
{
	result obj1;
	obj1.exam::set();
	obj1.set1();
	obj1.set2();
	obj1.exam::display();
	obj1.display1();
	obj1.display2();
	
	obj1.tmarks=obj1.maths+obj1.physics+obj1.sport1+obj1.sport2;
	cout<<obj1.tmarks;
	
	
	
}


