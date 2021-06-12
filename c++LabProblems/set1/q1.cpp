#include<iostream>
using namespace std;
float volume(float x)
{
	return x*x*x;
}
float volume(float a,float b,float c)
{
	return a*b*c;

}

int main()
{
	float l,b,h,s;
	cout<<"enter the sides of the cubiod"<<endl;
	cin>>l>>b>>h;
	cout<<"volume of cubiod is"<<volume(l,b,h)<<endl;
	cout<<"enter the side of cube"<<endl;
	cin>>s;
	cout<<"volume of the cube is"<<volume(s)<<endl;




	return 0;
}
