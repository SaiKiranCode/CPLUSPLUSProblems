#include<iostream>
using namespace std;
class Fraction
{
	int den;
	int num;
	public:
	Fraction(int num,int den)
	{
		this->num=num;
		this->den=den;

	}
	void display()
	{
		cout<<"\nnumber is "<<num<<"/"<<den<<endl;

	}




};
int main()
{
	int den,num;
	char ch;
	do
	{
		cout<<"enter the numerator and denominator"<<endl;
		cin>>num>>den;
		try
		{
			if(den==0)
			{
				throw 100;

			}
			if(num==0)
			{
				throw 'a';
			}
			Fraction f(num,den);
			f.display();

		}
		catch(int i)
		{
			cout<<"denominator cannot be zero"<<endl;
		}
		catch(char ch)
		{
			cout<<"fraction is 0"<<endl;
		}
		cout<<"enter y for another choice"<<endl;
		cin>>ch;

	}while(ch=='y'||ch=='Y');

	return 0;


}













