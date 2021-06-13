#include<iostream>
using namespace std;
class dummy
{
	int a,b;
	
	public:
	int y;
	p=&y;
	void setdata(int x,int y,int z)
	{
		y=z;
		a=x;
		b=y;	
	}
	void showdata()
	{
		cout<<"value of *p"<<*p;
		cout<<"\n value of a is"<<a<<"\nvalue of b is "<<b<<"\n";
	}


};
int main()
{
	dummy d1;
	d1.setdata(3,6,1);
	dummy d2=d1;
	d2.showdata();
	return 0;




}
