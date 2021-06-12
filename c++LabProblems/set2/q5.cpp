#include<iostream>
using namespace std;
class box
{
	float l,b,h,vol,sarea;
	public:
	static int count;
	box(float l1, float b1,float h1)
	{
		l=l1;
		b=b1;
		h=h1;
		count++;
	}
	box(float s)
	{
		l=s;
		b=s;
		h=s;
		count++;
	}
	void compute_sarea()
	{
		sarea=2*(l*b+b*h+h*l);
		cout<<"surface area of box is "<<sarea<<endl;
	
	}
	void compute_vol()
	{
		vol=l*b*h;
		cout<<"volume is "<<vol<<endl;
	
	}
	int get_count()
	{
		return count;
	}
	void display()
	{
		cout<<"lenght is "<<l<<endl;
		cout<<"breath is "<<b<<endl;
		cout<<"height is "<<h<<endl;
	}
	void check()
	{
		float r;
		cout<<"enter the radius of spere "<<endl;
		cin>>r;
		if(2*r<=l&&2*r<=b&&2*r<=h)
		{
			cout<<"sphere can be fit into the box "<<endl;
		
		}
		else
		{
			cout<<"sphere cannot fit in the box"<<endl;
		}
	
	
	}


};
int box::count;
int main()
{
	box b1(4,8,6);
	b1.display();
	cout<<"count is"<<box::count;
	box(2);
	cout<<"\ncount is "<<box::count;
	box b2(7);
	b2.display();
	b1.compute_vol();
	b2.compute_sarea();
	b1.check();
	return 0;
}



