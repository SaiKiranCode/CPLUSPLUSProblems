#include<iostream>
#include<iomanip>
using namespace std;
class student
{
	int rollno;
	char name[30];
	float m1,m2,m3,avg;
	public:
	void enterdata();
	void compute();
	void showdata();

};
void student::enterdata()
{
	cout<<"enter the name";
	cin>>name;
	cout<<"enter the rollnumber";
	cin>>rollno;
	cout<<"enter the marks";
	cin>>m1>>m2>>m3;



}
void student::compute()
{
	if(m1<m2&&m1<m3)
	{
		avg=(m2+m3)/2;

	}
	else
	{
		if(m2>m3)
		{

			avg=(m2+m1)/2;
		}
		else
		{

			avg=(m3+m1)/2;

		}

	}

}

void student::showdata()
{
	 cout<<"name is"<<name<<endl;
	cout<<"rollno"<<rollno<<endl;
	cout<<"marks"<<m1<<setw(3)<<m2<<setw(3)<<m3<<endl;
	cout<<"avg of best 2 out of 3 "<<avg;


}



int main()
{
	student s1;
	s1.enterdata();
	s1.compute();
	s1.showdata();

	return 0;
}
