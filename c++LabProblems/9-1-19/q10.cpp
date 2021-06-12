#include<iostream>
using namespace std;
class book
{
	int bookno;
	char booktitle[20];
	float price;
	float totalcost(int n)
	{
		return n*price;

	}


	public:
	void input()
	{
		cout<<"enter the title";
		cin>>booktitle;
		cout<<"enter the number";
		cin>>bookno;
		cout<<"enter the price";
		cin>>price;
	
		


	}
	void purchase(int n)
	{
		cout<<"title is"<<booktitle<<endl;
		cout<<"number is "<<bookno<<endl;
		cout<<"price for one book"<<price<<endl;
		cout<<"toal cost"<<totalcost(n)<<endl;

	}


};




int main()
{
	int n;
	book b1;
	b1.input();
	cout<<"enter the no of copies";
	cin>>n;
	b1.purchase(n);

	return 0;
}
