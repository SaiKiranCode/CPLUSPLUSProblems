#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	void set_data(int x, int y)
	{
		a=x;
		b=y;
	
	}
	void show_data()
	{
		cout<<"value of a is"<<a<<"\nvalue of b is"<<b;
	
	}


};
int main()
{
	complex c1;
	c1.set_data(2,3);
	c1.show_data();
	return 0;
}
