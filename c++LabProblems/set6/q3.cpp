#include<iostream>
using namespace std;
#include<string.h>
class account
{
	char name[20];
	protected:
	int accountno;
	float balance;
	public:
	account()
	{
		cout<<"enter the name ";
		cin>>name;
		cout<<"\n enter the account number ";
		cin>>accountno;
		cout<<"enter the balance ";
		cin>>balance;
	}

	void show()
	{
		cout<<"name is "<<name<<endl;
		cout<<"account number is "<<accountno<<endl;
		cout<<"balance is "<<balance<<endl;

	}



};




int main()
{
	int n;
	cout<<"enter the number of array objects"<<endl;
	cin>>n;
	account *p=new account[4];
	

	return 0;
}
