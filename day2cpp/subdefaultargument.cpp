#include<iostream>
using namespace std;
void sub(int x=2,int y=6)
{
	int c=x-y;
	cout<<c<<endl;

}
int main()
{
	sub(6,3);//3
	sub();//-4
	sub(4);//-2
}
