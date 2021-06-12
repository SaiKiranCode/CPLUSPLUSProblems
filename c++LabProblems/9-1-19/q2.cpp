#include<iostream>
using namespace std;
int m=10;
int main()
{
	
	int m=20;
	{
		cout<<"m is"<<m<<endl;
		 cout<<"::m is"<<::m<<endl;

		{
			int m=30;
			 cout<<"m is"<<m<<endl;
			 cout<<"::m is"<<::m<<endl;



		}


	}
	
	return 0;
}
