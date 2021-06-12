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
			

		}
		
	
		


};
class derived1: public base
{
	public:
		void display()
		{

			cout<<"inside derived1 "<<endl;
			
		}





};
class derived2: public base
{
       


};



int main()
{
	int x;
	base *ptr;
	base obj;
	derived1 obj1;
	derived2 obj2;
	ptr=&obj;
	ptr->display();
	  ptr=&obj1;
        ptr->display();
  ptr=&obj2;
        ptr->display();















	return 0;
}
