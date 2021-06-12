#include<iostream>
using namespace std;
#include<string.h>
class student
{
	char name[30];
	int roll_no;
	public:
	void set_data(char *name,int roll_no)
	{
		strcpy(this->name,name);
		this->roll_no=roll_no;
	}
	void show_data()
	{
		cout<<"name is "<<name<<endl;
		cout<<"roll no is "<<roll_no<<endl;
	}


};
int main()
{
	char name[30];
	student s1;
	cout<<"enter the name ";
	cin>>name;
	s1.set_data(name,13);
	s1.show_data();
	return 0;
}


