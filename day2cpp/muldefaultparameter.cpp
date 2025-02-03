#include<iostream>
using namespace std;
void mul(int x=2,int y=6)
{
	int c=x*y;
	cout<<c<<endl;

}
int main()
{
	mul(6,3);
	mul();
	mul(4);
}
