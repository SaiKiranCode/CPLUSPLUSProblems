#include<iostream>
using namespace std;
#include<stdlib.h>
float sum(float a,float b,float c=0,float d=0)
{
	return a+b+c+d;

}


int main()
{
		int choice;
		float a,b,c,d;
		cout<<"enter 1 to add 2 numbers\nenter 2 to add 3 numbers\nenter 3 to add 4 numbers\n"<<"enter 4 to exit\n";
       do
        {

                cout<<"enter the choice ";
                cin>>choice;
                switch(choice)
                {
                        case 1:
                                 cout<<"enter the numbers"<<endl;
                                cin>>a>>b;
                                cout<<" sum is"<<sum(a,b)<<endl;
                                break;
                        case 2:
                                 cout<<"enter the numbers"<<endl;
                                cin>>a>>b>>c;

                                cout<<"sum is"<<sum(a,b,c)<<endl;
                                break;
                        case 3:
                                 cout<<"enter the numbers"<<endl;
                                cin>>a>>b>>c>>d;

                                cout<<" sum is"<<sum(a,b,c,d)<<endl;
                                break;
                        case 4:
                               exit(0);
                        default:
                                cout<<"enter corect choice"<<endl;

                }

        }while(choice!=5);


	
	return 0;
}
