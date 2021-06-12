#include<iostream>
#include<string.h>
using namespace std;
class laptop
{
	char brand[30];
	char model[30];
	int ram;
	int harddisk;
	float price;
	public:
	laptop()
	{
		cout<<"object created ";
	}
	laptop(char *brand1,char *model1,int ram1)
	{
		strcpy(brand,brand1);
		strcpy(model,model1);
		ram=ram1;
		cout<<"enter the price "<<endl;
		cin>>price;
		cout<<"enter the hardisk"<<endl;
		cin>>harddisk;
	}
	laptop(char *brand1,char *model1,float price1,int ram1,int harddisk1)
	{
		strcpy(brand,brand1);
		strcpy(model,model1);
		ram=ram1;
		harddisk=harddisk1;
		price=price1;
	
	}	
	laptop(const laptop &p)
	{
		strcpy(brand,p.brand);
		strcpy(model,p.model);
		ram=p.ram;
		harddisk=p.harddisk;
		price=p.price;
	
	}
	void display()
	{
		cout<<"laptop brand is"<<brand<<endl;
		cout<<"model is "<<model<<endl;
		cout<<"ram size is "<<ram<<endl;
		cout<<"harddisk size is "<<harddisk<<endl;
		cout<<"price is"<<price<<endl;
	
	
	
	}

};
int main()
{
	char brand[30];
	char model[30];
	laptop l1;
	cout<<"enter the brand  ";
	cin>>brand;
	cout<<"enter the model  ";
	cin>>model;
	laptop l2(brand,model,100000,5,500);
	l2.display();
	laptop l3(brand,model,4);
	l3.display();
	laptop l4=l3;
	l4.display();


	return 0;
}





