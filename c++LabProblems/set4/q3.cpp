#include<iostream>
using namespace std;
#include<stdlib.h>
class Complex
{
	int a,b;
	public:
	Complex(int x,int y)
	{
		a=x;
		b=y;
	
	}
	void set_data(int x,int y)
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
                temp.a=a*c.a-b*c.b;;
                temp.b=a*c.b+b*c.a;
                return temp;


        }




};





int main()
{
		

   	int choice;
	Complex a,b,c;
	int i,j,l,m;
        cout<<"enter 1 to add\n 2 to subtract\n 3 to multiply\n 4 to exit\n"<<endl;
	
	do
	{
		cout<<"enter the choice "<<endl;
             cin>>choice;
		if(choice==4)
		{
			exit(0);
		}
		  cout<<"enter the real and imaginary"<<endl;
                  cin>>i>>j;
                  a.set_data(i,j);
                  cout<<"enter the real and imaginary"<<endl;
                    cin>>l>>m;
                    b.set_data(l,m);
                  a.display();
                 b.display();

                switch(choice)
                {
                        case 1:
                                c=a+b;
				cout<<"sum is";
				c.display();
                                break;
                        case 2:
                                 
				c=a-b;
                                cout<<"difference is";
				c.display();
                                break;
                        case 3:
                                 c=a*b;

                                cout<<" product is";
				c.display();
                                break;
                  
                        case 4:
                                exit(0);
                     	default:
				cout<<"enter correct choice "<<endl;

                }
/*		     cout<<"enter the choice "<<endl;
             cin>>choice;
                  cout<<"enter the real and imaginary"<<endl;
                  cin>>i>>j;
                  a.set_data(i,j);
                  cout<<"enter the real and imaginary"<<endl;
                    cin>>l>>m;
                    b.set_data(l,m);
                  a.display();
                 b.display();
*/


        }while(choice!=4);
        return 0;
}
 
