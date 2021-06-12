#include<iostream>
using namespace std;
float perimeter(float r)
{
	return 2*3.14*r;
}
float perimeter(float l,float b )
{
	return 2*(l+b);
}
float perimeter(float a,float b,float c)
{
	return a+b+c;

}

int main()
{
	float r,l,b,c,h,a;
	cout<<"enter the radius of circle"<<endl;
	cin>>r;
	cout<<"perimeter is"<<perimeter(r)<<endl;
	cout<<"enter sides of rectangle "<<endl;
	cin>>l>>b;
	cout<<"perimeter of rectangle is"<<perimeter(l,b)<<endl;
	cout<<"enter the sides of triangle"<<endl;
	cin>>c>>h>>a;
	cout<<"perimeter of the triangle is"<<perimeter(a,c,h);
	
	
	return 0;
}
