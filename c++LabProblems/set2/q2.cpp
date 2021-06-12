#include<iostream>
#include<string.h>
int maxmarks;
using namespace std;
class student
{
	char name[30];
	int rollno;
	int age;
	int Class;
	int marks[6];
	float grade;
	bool gradeflag;
	public:
	student()
	{
		cout<<"object created"<<endl;

	}
	student( char *name1,int rollno1,int age1)
	{
		strcpy(name,name1);
		rollno=rollno1;
		age=age1;
		Class=0;
	}
    student(char *name1,int rollno1,int age1,int Class1)
        { 
               strcpy(name,name1) ;
                rollno=rollno1;
                age=age1;
		Class=Class1;

        }
   student(char *name1,int rollno1)
        {
         	strcpy(name,name1);       
                rollno=rollno1;
                age=10;
                Class=5;

        }
	student(const student &p)
	{
		strcpy(name,p.name);
		rollno=p.rollno;
		age=p.age;
		Class=p.Class;

	}
	void display()
	{
		cout<<" student name is "<<name<<endl;
		cout<<"roll no is "<<rollno<<endl;
		cout<<"age is "<<age<<endl;
		cout<<"class is "<<Class<<endl;
	
           

	}
	void set_marks()
	{
		cout<<"enter the marks"<<endl;
		for(int i=0;i<6;i++)
		{
			cin>>marks[i];
		}

		
	}
   void	computegrade()
	{
		int sum=0;
		float avg,per;
	cout<<"marks are"<<endl;
       for(int i=0;i<6;i++)
                {
                        cout<<marks[i]<<"\t";
                }
                cout<<endl;
	
	for(int i=0;i<6;i++)
                {
                        sum=sum+marks[i];
                }
		avg=sum/6;
		cout<<"enter the gradeflag";
		cin>>gradeflag;
		cout<<gradeflag;
		if(gradeflag==1)
		{
			grade=(avg*10)/maxmarks;
			cout<<" grade is "<<grade;	

		}
		else
		{
			per=(avg*100)/maxmarks;
			cout<<"percentage is "<<per<<endl;
		}


	}





};



int main()
{
	char name[30];
	cout<<"enter the maximum marks ";
	cin>>maxmarks;
	cout<<"enter the name ";
	cin>>name;
	student s1,s2(name,7,18),s3(name,8,18,13),s4(name,9);
	student s5=s3;
	s2.display();
        s3.display();
	s4.display();
        s5.display();
	s5.set_marks();
	s5.computegrade();
	
	return 0;
}
