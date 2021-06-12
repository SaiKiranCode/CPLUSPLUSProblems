#include<iostream>
#include<stdlib.h>
using namespace std;
inline float add(float a,float b)
{
	return a+b;
}
inline float sub(float a,float b)
{
        return a-b;
}
inline float mul(float a,float b)
{
        return a*b;
}
inline float div(float a,float b)
{
        return a/b;
}

int main()
{
	float a,b;
	int choice;
	cout<<"enter 1 to add\n 2 to subtract\n 3 to multiply\n 4 to divide\n 5 to exit\n"<<endl;
	do
	{
	
		cout<<"enter the choice ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				 cout<<"enter the numbers"<<endl;
        		        cin>>a>>b;
				cout<<" sum is"<<add(a,b)<<endl;
				break;
			case 2:
                                 cout<<"enter the numbers"<<endl;
                                cin>>a>>b;

				cout<<"difference is"<<sub(a,b)<<endl;
				break;
                        case 3:
                                 cout<<"enter the numbers"<<endl;
                                cin>>a>>b;

                                cout<<" product is"<<mul(a,b)<<endl;
				break;
                        case 4:
                                 cout<<"enter the numbers"<<endl;
                                cin>>a>>b;

                                cout<<"divison is"<<div(a,b)<<endl;
				break;
			case 5:
				exit(0);
			default:
				cout<<"enter corect choice"<<endl;

		}

	}while(choice!=5);
	return 0;
}
