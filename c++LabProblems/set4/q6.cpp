#include<iostream>
using namespace std;
class ABC
{
	
	protected:       
 	int a,b,c;
	public:
	ABC(int x,int y, int z)
	{
		a=x;
		b=y;
		c=z;
	}
	void display()
	{
		cout<<"a="<<a<<"\n"<<"b="<<b<<"\n"<<"c="<<c<<endl;
	
	}
};
class XYZ:public ABC
{
	int d,e;
	public:
	XYZ(int l,int m,int x,int y,int z):ABC(x,y,z)
	{
		d=l;
		e=m;
	
	
	
	}
	void display()
	{
		cout<<"in derived"<<endl;
		cout<<"a is"<<a<<"\n"<<"b is"<<b<<"\n"<<"c is"<<c<<"\n";
		cout<<"d is "<<d<<"\n"<<"e is "<<e<<"\n";
	
	}
};
int main()
{
	XYZ  s(4,5,1,2,3);
	s.display();
	return 0;


}






