#include<iostream>
using namespace std;
class Rationalnumber
{
	int p,q;
	public:
	void set_data(int x,int y)	
	{
		p=x;
		q=y;
	}
	void solve()
	{
		int n1=p;
		int n2=q;
	 while(n1 != n2)
    	{
        	if(n1 > n2)
       	     n1 -= n2;
        	else
            n2 -= n1;
    	}

    	p=p/n1;
	q=q/n1;
	}
	int getp()
	{
		return p;
	}
	int getq()
	{
		return q;
	}
	void display()
	{
		cout<<"number is"<<p<<"/"<<q<<endl;


	}
	Rationalnumber operator + (const Rationalnumber &k)	
	{
		Rationalnumber temp;
		temp.p=p*k.q+q*k.p;
		temp.q=q*k.q;
		return temp;

	}
	Rationalnumber operator - (const Rationalnumber &k)     
        {
                Rationalnumber temp;
                temp.p=p*k.q-q*k.p;
                temp.q=q*k.q;
		return temp;

        }
       Rationalnumber operator * (const Rationalnumber &k)     
        {
                Rationalnumber temp;
                temp.p=p*k.p;
                temp.q=q*k.q;
		return temp;

        }
	Rationalnumber operator ~()
	{
		Rationalnumber temp;
		temp.p=-p;
		temp.q=q;
		return temp;
	
	}





};
int main()
{
	int a,b,c,d;
	int choice;
	Rationalnumber x,y,z;
	cout<<"enter 1 to add\n 2 to subtract\n 3 to multiply\n 4 to negate\n 5 to exit\n"<<endl;
	do
	{
	
		cout<<"enter the choice ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				 cout<<"enter numerator and denominator for first number"<<endl;
        		        cin>>a>>b;
				x.set_data(a,b);
				   cout<<"enter numerator and denominator for second number"<<endl;
                                cin>>c>>d;
				y.set_data(c,d);
				x.solve();
				x.display();
				x.solve();
				y.display();
				z=x+y;
				z.solve();
				cout<<" sum is";
				z.display();
				break;
			case 2:
				 cout<<"enter numerator and denominator for first number"<<endl;
        		        cin>>a>>b;
				x.set_data(a,b);
				   cout<<"enter numerator and denominator for second number"<<endl;
                                cin>>c>>d;
				y.set_data(c,d);
				x.solve();
				y.solve();				
				x.display();
				y.display();
				z=x-y;
				z.solve();
				cout<<" difference is";
				z.display();			
                                 
				break;
                        case 3:
				 cout<<"enter numerator and denominator for first number"<<endl;
        		        cin>>a>>b;
				x.set_data(a,b);
				   cout<<"enter numerator and denominator for second number"<<endl;
                                cin>>c>>d;
				y.set_data(c,d);
x.solve();
				y.solve();
				x.display();
				y.display();
				z=x*y;
				cout<<" product is";
				z.solve();
				z.display();			
                               
				break;
                        case 4: 
				cout<<"enter numerator and denominator "<<endl;
        		        cin>>a>>b;
				x.set_data(a,b);
				y=~x;
				x.solve();
				y.solve();
				y.display();
				
                                
				break;
			case 5:
				exit(0);
			default:
				cout<<"enter corect choice"<<endl;

		}

	}while(choice!=5);
	return 0;

	
}
