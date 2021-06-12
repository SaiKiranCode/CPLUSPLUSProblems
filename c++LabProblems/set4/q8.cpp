#include<iostream>
using namespace std;
#include<string.h>
class employee
{
	protected:
		char name[30];
		int age;
		float salary;
	public:
		employee(char *name,int age,float salary)
		{
			strcpy(this->name,name);
			this->age=age;
			this->salary=salary;
		}
		void display()
		{
			cout<<"employee name is"<<name<<endl;
			cout<<"age is"<<age<<endl;
			cout<<"salary is"<<salary<<endl;
		}
};
class teacher:public employee
{
	char subject[30];
	char college[30];
	public:
	teacher(char *name,int age,float salary,char *subject,char *college):employee(name,age,salary)
	{
		strcpy(this->subject,subject);
		strcpy(this->college,college);
	}
	void display()
	{
                        cout<<"employee name is"<<name<<endl;
                        cout<<"age is"<<age<<endl;
                        cout<<"salary is"<<salary<<endl;
			cout<<"subject is "<<subject<<endl;
			cout<<"college is "<<college<<endl;	 
	}

};
class hod:public employee
{
	char department[30];
	public:
	hod(char *name,int age,float salary ,char *department):employee(name,age,salary)	
	{
		strcpy(this->department,department);
	}
	void display()
	{
                        cout<<"employee name is"<<name<<endl;
                        cout<<"age is"<<age<<endl;
                        cout<<"salary is"<<salary<<endl;
			cout<<"department is "<<department;
	
	
	}
};
int main()
{
	char name[30],department[30],subject[30],college[30];
	cout<<"enter the teacher name ";
	cin>>name;
	cout<<"enter department ";
	cin>>department;

	hod s(name,45,20000,department);
	cout<<"enter the teacher name ";
	cin>>name;
	cout<<"enter the subject";
	cin>>subject;
	cout<<"enter the college";
	cin>>college;
	teacher t(name,32,18000,subject,college);
	s.display();
	t.display();
	return 0;

}






