#include<iostream>
using namespace std;
class one{
	static int a;
	public:
		void set()
		{
			a++;
		}
  void display()
  {
  	cout<<a<<endl;
  }
};
int one::a;
int main()
{
one ob1,ob2,ob3;
ob1.display();
ob2.display();
ob3.display();
ob2.set();
ob1.display();
ob2.display();
ob3.display();
ob3.set();
ob1.display();
ob2.display();
ob3.display();
}
