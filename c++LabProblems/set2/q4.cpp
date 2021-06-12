#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
	Complex(int x,int y=0)
	{
		a=x;
		b=y;
	
	}
	
	void display()
	{
		cout<<" complex number is"<<a<<"+"<<b<<"i"<<endl;
	}
	Complex operator + (Complex c)
	{
		Complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return temp;


	}
        Complex operator - (Complex c)
        {
                Complex temp;
                temp.a=a-c.a;
                temp.b=b-c.b;
                return temp;


        }

	Complex()
	{}
        Complex operator * (Complex c)
        {
                Complex temp;
                temp.a=a*c.a;
                temp.b=b*c.b;
                return temp;


        }




};





int main()
{
	Complex c1(3,5),c2(9),c3(7,9),c4,c5,c6;
	c4=c1+c3;
	c5=c3-c1;
	c6=c3*c1;
	c1.display();
        c2.display();
        c3.display();
        c4.display();
        c5.display();
        c6.display();


	return 0;
}
