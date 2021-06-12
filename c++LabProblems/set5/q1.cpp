#include<iostream>
using namespace std;
class base
{
	protected:
		int i;
	public:
		virtual void display()
		{
			cout<<"inside base "<<endl;
			cout<<"value of i is"<<i<<endl;

		}
		void set_value(int a)
		{

			i=a;
		}

	
		


};
class derived1:virtual public base
{
	public:
		void display()
		{

			cout<<"inside derived1 "<<endl;
			cout<<"value of i is "<<i<<endl;
		}





};
class derived2:virtual public base
{
        public:
                void display()
                {
			
                        cout<<"inside derived2 "<<endl;
			cout<<"value of i is "<<i<<endl;
                }





};
class derived3:public derived1,public derived2
{

	public:
		void display()
		{
	
			cout<<"inside derived3 "<<endl;
			 cout<<"value of i is "<<i<<endl;


		}		
};


int main()
{
	int x;
	base *ptr;
	derived3 obj;
	ptr=&obj;
	cout<<"enter the value  ";
	cin>>x;
	ptr->set_value(x);
	ptr->display();















	return 0;
}
