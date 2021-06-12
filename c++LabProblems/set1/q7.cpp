#include<iostream>
using namespace std;
float area(float x)
{
	return 3.14*x*x;
}
float area(float a,float b)
{
	return a*b;

}

int main()
{
	float l,b,s;
	cout<<"enter the sides of the rectangle"<<endl;
	cin>>l>>b;
	cout<<"area  is"<<area(l,b)<<endl;
	cout<<"enter the radius of circle"<<endl;
	cin>>s;
	cout<<"area of the cube is"<<area(s)<<endl;




	return 0;
}
