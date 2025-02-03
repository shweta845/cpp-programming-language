#include<iostream>
using namespace std;
 void fun(int&x,int&y)
{
	x=12;
	y=13;
	
}  int main()
{
	int a=2,b=4;
	cout<<a<<"  "<<b<<endl;
	fun(a,b);
	cout<<a<<"   "<<b<<endl;
}
