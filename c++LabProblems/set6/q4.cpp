#include<iostream>
#include<string.h>
using namespace std;
class product
{
	protected:
	int barcode;
	char name[20];
	public:
	product(char *name,int barcode)
	{
		strcpy(this->name,name);
		this->barcode=barcode;
	}
	int getcode()
	{
		return barcode;
	}
	void setcode()
	{
		cout<<"enter the code "<<endl;
		cin>>this->barcode;
	}
	virtual	void scanner()
	{
		cout<<"enter the product name "<<endl;
		cin>>this->name;
		cout<<"enter the barcode "<<endl;
		cin>>this->barcode;


	}
	virtual	void printer()
	{
		cout<<" product name is "<<name<<endl;
		cout<<"barcode is "<<barcode<<endl;

	}




};
class prepackedfood :public product
{
	float price;
	public:
	prepackedfood(char *name,int barcode,float price):product(name,barcode)
	{
		this->price=price;

	}
	void scanner()
	{
		cout<<"enter the product ";
		cin>>name;
		cout<<" enter the barcode ";
		cin>>barcode;
		cout<<"enter the price ";
		cin>>price;

	}
	void printer()
	{
		cout<<" product name is "<<name<<endl;
		cout<<" barcode is "<<barcode<<endl;
		cout<<"price is "<<price<<endl;



	}





};
class freshfood:public product
{
	float weight;
	float costperkg;
	float price;
	public:
	freshfood(char *name,int barcode,float weight,float costperkg):product(name,barcode)
	{
		this->weight=weight;
		this->costperkg=costperkg;
		this->price=weight*costperkg;




	}
	   void scanner()
        {
                cout<<"enter the product ";
                cin>>name;
                cout<<" enter the barcode ";
                cin>>barcode;
                cout<<"enter the cost per kg ";
                cin>>costperkg;
		cout<<"enter the weight ";
		cin>>weight;

        }
        void printer()
        {
                cout<<" product name is "<<name<<endl;
                cout<<" barcode is "<<barcode<<endl;
               cout<<" cost per kg is "<<costperkg<<endl;
		cout<<"weight is "<<weight<<endl;
		 cout<<"price is "<<price<<endl;



        }





};


int main()
{
	product *ob;
	char name[20];
	cout<<"enter the product";
	cin>>name;
	freshfood ob1(name,18,2.5,30.9);
	ob=&ob1;
	ob->printer();
	prepackedfood ob2(name,20,456);
	ob=&ob2;
	ob->printer();

	return 0;
}
