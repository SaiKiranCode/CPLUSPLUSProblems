#include<iostream>
using namespace std;

class Arithmetic
{
	protected:
		int a,b;
	public:
		void set_data(int x,int y)
		{
			a=x;
			b=y;

		}
		virtual void operation()=0;
	virtual	void display()
		{
			cout<<"in arithmetic class"<<endl;
			cout<<"a is "<<a<<endl;
			cout<<"b is "<<b<<endl;


		}
};

class addition:public Arithmetic
{
	int add;
	public:
		void operation()
		{
			add=a+b;
			cout<<"addition of "<<a<<"and"<<b<<"is"<<add<<endl;

		} 
		 void display()
                {
                        cout<<"in addition class"<<endl;
                        cout<<"a is "<<a<<endl;
                        cout<<"b is "<<b<<endl;
			cout<<"addition of two numbers "<<add<<endl;

                }




};

class subtraction:public Arithmetic
{
	int sub;
	public:
		void operation()
		{
			sub=a-b;
			cout<<"subtraction of "<<a<<"and"<<b<<"is"<<sub<<endl;

	
		}
		 void display()
                {
                        cout<<"in subtraction class"<<endl;
                        cout<<"a is "<<a<<endl;
                        cout<<"b is "<<b<<endl;
			cout<<"subtraction is "<<sub;

                }





};
int main()
{
	int m,n;	
//	Arithmetic x;
	Arithmetic *ptr;
	addition  obj1;
	subtraction obj2;
	
	cout<<"enter the two numbers";
	cin>>m>>n;
/*	ptr->set_data(m,n);
	ptr->display();
*/	ptr=&obj1;
	
	ptr->set_data(m,n);
	ptr->operation();
	ptr->display();
	ptr=&obj2;
	ptr->set_data(m,n);
	ptr->operation();
	ptr->display();
	return 0;

}








