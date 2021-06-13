#include<iostream>
using namespace std;
class complex
{
	int a,b;
	int *p;
	public:
	complex()
	{
		p=new int;
	}
	void setdata(int x,int y, int z)
	{
		a=x;
		b=y;
		*p=z;
	}
	void showdata()
	{
		cout<<"\n value of a is"<<a<<"\nvalue of b is"<<b<<"\n";
		cout<<"value of z"<<*p;
	}
	complex(complex &d)
	{
		a=d.a;
		b=d.b;
		p=new int;
		*p=*(d.p);
	}
	~complex()
	{
		delete p;
	}
};
int main()
{
	complex c1;
	c1.setdata(3,4,5);
	complex c2=c1;
	c2.showdata();
	return 0;

}









