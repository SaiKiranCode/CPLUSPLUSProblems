#include<iostream>
#include<string.h>
using namespace std;
class date
{
	int day;
	int month;
       int year;
	public:
	date(int day,int month,int year)
	{
		this->day=day;
		this->month=month;
		this->year=year;	
	}	
	date set_data()
	{
		
		cout<<"enter the day,month,year ";
		cin>>day>>month>>year;
		return *this;
	}
	
	void display()
	{
		cout<<"date is ";
		cout<<day<<"-"<<month<<"-"<<year<<endl;

	
	}
	date()
	{}
	int get_day()
	{
		return day;
	}
	int get_month()
	{

		return month;
	}
	int get_year()
	{

		return year;
	}






};
class employee
{
	char name[30];
	int empid;
	date bdate;
	float salary;
	date jdate;
	public:
	employee(char *name,int empid,date bdate,float salary,date jdate)
	{
		strcpy(this->name,name);
		this->empid=empid;
		this->bdate=bdate;
		this->salary=salary;
		this->jdate=jdate;
	}
	  void  set_data(char *name,int empid,date bdate,float salary,date jdate)
        {
                strcpy(this->name,name);
                this->empid=empid;
                this->bdate=bdate;
                this->salary=salary;
                this->jdate=jdate;
        }

	void display()
	{
		cout<<" employee name is "<<name<<endl;
		cout<<"employee id is "<<empid<<endl;
		cout<<"birth";
		bdate.display();
		cout<<"salary is"<<salary<<endl;
		cout<<"joining ";
		jdate.display();
	
	
	
	
	}
	employee()
	{}
};

                              

date latestdate(date *ptr,int n)
{
	
	date temp;
	temp=ptr[0];
	for(int j=1;j<n;j++)
	{
		if(temp.get_year()<ptr[j].get_year())
		{
			temp=ptr[j];
		}
		else
		{
			if(temp.get_year()==ptr[j].get_year())
			{
				if(temp.get_month()<ptr[j].get_month())
				{
					temp=ptr[j];
				}
				else
				{
					if(temp.get_month()==ptr[j].get_month())
					{	
						if(temp.get_day()<ptr[j].get_day())
						{	
							temp=ptr[j];
						}

					}
				}
			}

		}
	

	}
	return temp;
}
/*employee oldest(employee *ptr,int n)
{

        employee temp;
        temp=ptr[0];
        for(int j=1;j<n;j++)
        {
                if(temp.bdate.get_year()<ptr[j].bdate.get_year())
                {
                        temp=ptr[j];
                }
                else
                {
                        if(temp.bdate.get_year()==ptr[j].bdate.get_year())
                        {
                                if(temp.bdate.get_month()<ptr[j].bdate.get_month())
                                {
                                        temp=ptr[j];
                                }
                                else
                                {
                                        if(temp.bdate.get_month()==ptr[j].bdate.get_month())
                                        {
                                                if(temp.bdate.get_day()<ptr[j].bdate.get_day())
                                                {
                                                        temp=ptr[j];
                                                }

                                        }
                                }
                        }
 
                }


        }
        return temp;
}
*/


int main()
{
	int id;
	int n,m;
	date temp;
	employee temp1;
	float salary;
	cout<<"enter the number of time objects "<<endl;
	cin>>n;
	date *ptr=new date[n];
	for(int j=0;j<n;j++)
	{

		ptr[j].set_data();
	}
	temp=latestdate(ptr,n);
	cout<<"latest date is "<<endl;
	temp.display();


	char name[30];
	cout<<"enter  the no of empolyees ";
	cin>>m;
	employee *emp=new employee[m];
	date *bdate=new date[m];
	date *jdate=new date[m];
	for(int j=0;j<m;j++)
	{
		cout<<"enter the name of employee  "; 
		cin>>name;
		cout<<"enter id ";
		cin>>id;
		bdate[j].set_data();
		cout<<"enter salary ";
		cin>>salary;
		jdate[j].set_data();
		  emp[j].set_data(name,id,bdate[j],salary,jdate[j]);
		emp[j].display();
	}
	
	return 0;
}
