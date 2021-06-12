#include<iostream>
#include<stdlib.h>
using namespace std;
class myinteger
{
	int num;
	public:
		myinteger(int i)
		{
			num=i;
		}
		void set_data(int i)
		{
			num=i;
		}
		void display()
		{
			cout<<"value of number is"<<num<<endl;

		}
		int get_num()
		{
			return num;
		}
		myinteger operator +(const myinteger &c)
		{
			myinteger temp;
			temp.num=this->num+c.num;
			return temp;
		}
		myinteger operator -(const myinteger &c)
                {
                        myinteger temp;
                        temp.num=this->num-c.num;
			return temp;

                }
		myinteger operator * (const myinteger &c)
                {
                        myinteger temp;
                        temp.num=this->num*c.num;
			return temp;

                }
		myinteger operator /(const myinteger &c)
                {
                        myinteger temp;
                        temp.num=this->num/c.num;
			return temp;

                }
                myinteger operator %(const myinteger &n)
                {
                        myinteger temp;
                        temp.num=this->num%n.num;
			return temp;
                }
		myinteger()
		{}
		myinteger operator ++()
		{
			myinteger temp;
			temp.num=++num;
			return temp;
		}
		myinteger operator --()
		{
			myinteger temp;
			temp.num=--num;
			return temp;
		
		
		}
		  myinteger operator ++(int x)
                {
                        myinteger temp;
                        temp.num=num++;
                        return temp;
                }
                myinteger operator --(int x)
                {
                        myinteger temp;
                        temp.num=num--;
                        return temp;


                }




};
int main()
{
	myinteger a,b,c;
	int i,j;
	int choice;
	cout<<"enter 1 to add\n 2 to subtract\n 3 to multiply\n 4 to divide\n5 to get remainder\n 6 to get prefix increment and prefix decrement \n 7 to get postfix decrement  and postfix increment\n 8)exit\n"<<endl;
	do
	{
	
		cout<<"enter the choice ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				 cout<<"enter the numbers"<<endl;
        		        cin>>i>>j;
				a.set_data(i);
				b.set_data(j);
				c=a+b;
				cout<<"sum is ";
				c.display();
				break;
			case 2:
cout<<"enter the numbers"<<endl;
                                cin>>i>>j;
                                a.set_data(i);
                                b.set_data(j);
                                c=a-b;
                                cout<<"difference is ";
                                c.display();

				break;
                        case 3:
                                   cout<<"enter the numbers"<<endl;
                                cin>>i>>j;
                                a.set_data(i);
                                b.set_data(j);
                                c=a*b;
                                cout<<"multiplication is ";
                                c.display();

				break;
                        case 4:
                                   cout<<"enter the numbers"<<endl;
                                cin>>i>>j;
                                a.set_data(i);
                                b.set_data(j);
                                c=a/b;
                                cout<<"divison is ";
                                c.display();

				break;
			case 5:
				  cout<<"enter the numbers"<<endl;
                                cin>>i>>j;
                                a.set_data(i);
                                b.set_data(j);
                                c=a%b;
                                cout<<"remainder  is ";
                                c.display();
				break;
			case 6:
				cout<<"prefix increment and prefix decrement"<<endl;
				cout<<"enter the number "<<endl;
				cin>>i;
				a.set_data(i);
				cout<<"a is ";
				a.display();
				b=++a;
				cout<<"a is ";
				a.display();
				cout<<" b is ";
				b.display();
				c=--a;
				cout<<" a is ";
				a.display();
				cout<<"c is ";
				c.display();
				break;
			case 7:
				    cout<<"postfix increment and postfix decrement"<<endl;
                                cout<<"enter the number "<<endl;
                                cin>>i;
                                a.set_data(i);
                                cout<<"a is ";
                                a.display();
                                b=a++;
                                cout<<"a is ";
                                a.display();
                                cout<<" b is ";
                                b.display();
                                c=a--;
                                cout<<" a is ";
                                a.display();
                                cout<<"c is ";
                                c.display();
                                break;

			case 8:
				exit(0);
			default:
				cout<<"enter corect choice"<<endl;

		}

	}while(choice!=8);
	return 0;
}
