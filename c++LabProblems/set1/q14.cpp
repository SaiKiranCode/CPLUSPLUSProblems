#include<iostream>
using namespace std;
#include<string.h>
class child
{ 
	char name[30];
	float height;
	int age;
	public:
	void set_data()
	{
		cout<<"enter the name ";
		cin>>name;
		cout<<"enter the height ";
		cin>>height;
		cout<<"enter the age";
		cin>>age;
	
	}
	void display()
	{
		cout<<"name is "<<name<<endl;
		cout<<" height is "<<height<<endl;
		cout<<"age is "<<age<<endl;
	
	}
	int get_age()
	{
		return age;
	}
	float get_height()
	{
		return height;
	}


};
child maxheight(child *kid,int n)
{
	child temp;
	temp=kid[0];
	for(int i=0;i<n;i++)
	{
			if(temp.get_height()<kid[i].get_height())
			{
				temp=kid[i];
			}
	}
	return temp;


}
child youngest(child *kid,int n)
{
	child young;
	young=kid[0];
	for(int i=0;i<n;i++)
	{
		if(young.get_age()>kid[i].get_age())
		{
			young=kid[i];
		}
	}
	return young;


}
int main()
{
	int n;
	cout<<"enter the value of n";
	cin>>n;
	child temp;
	child *kid=new child[n];
	for(int i=0;i<n;i++)
	{
		kid[i].set_data();
		kid[i].display();
	}
	temp=maxheight(kid,n);
	cout<<"child with maximum height "<<endl;
	temp.display();
        temp=youngest(kid,n);
        cout<<"child with youngest age  "<<endl;
        temp.display();

	return 0;
}














