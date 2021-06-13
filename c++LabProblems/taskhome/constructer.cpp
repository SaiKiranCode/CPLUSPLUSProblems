#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public :
/*	void set_data(int x, int y)
	{
		a=x;
		b=y;
	}
*/
	void showdata()
	{
		cout<<"value of a is"<<a<<"\n value of b is"<<b<<"\n";
	}
/*	complex add(complex c)
	{
		complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return temp;
	}
	complex operator +(complex c)
	{
           complex temp;
                temp.a=a+c.a;
                temp.b=b+c.b;
                return temp;
	}
*/	complex(int x,int y)
	{
		a=x;
		b=y;
		
	
	}
	complex(int x)
	{
		a=x;
		b=0;
	}

};
int main()
{
	complex c1(3,9),c2(2),c3=9;
	c1.showdata();
	c2.showdata();
//	c3=c1.add(c2);
	c3.showdata();
//	c4=c1+c3;
//	c4.showdata();
		return 0;

}


