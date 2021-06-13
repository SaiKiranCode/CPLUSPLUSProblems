#include<iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
    public:
    Date()
    {
        day=0;
        month=0;
        year=0;


    }
    Date(int day,int month,int month)
    {
        this->day=day;
        this->month=month;
        this->year=year;

    }
    void display()
    {
        cout<<"date is "<<day<<"-"<<"-"<<month<<"-"<<year<<endl;
    }
    friend int  operator -(Date d1,Date d2);
    friend int no_of_days(Date d1);
};
int operator-(Date d1,Date d2)
{
    if(d1.year<d2.year)
    {
        cout<<"no of days is negative"<<endl;
        return -1;
    }
    else
    {
        if(d1.year>d2.year)
        {








        }









    }






}
int no_of_days(Date date)
{
         if(date.month==1||date.month==3||date.month==5||date.month==7||date.month==8||date.month==10||date.month==12)
        {
            return 31;
        }
        if(date.month==4||date.month==6||date.month==9||date.month==11)
        {
            return 30;
        }

    if(date.month==2)
    {
			if(date.year%100==0)
			{
				if(date.year%400==0)
					return 29;
				else
					return 28;

			}
			else
			{
				if(date.year%4==0)
					return 29;
				else
					return 28;


			}
		}
}





int checkdate(int day,int month,int year)
{

        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        if(day<=31)
        return 1;
        else
        return 0;

    }
        if(month==4||month==6||month==9||month==11)
    {
        if(day<=30)
        return 1;
        else
        return 0;
    }

    if(month==2)
    {
        if(day<=28)
        return 1;
        else
	{
		if(day==29)
		{
			if(year%100==0)
			{
				if(year%400==0)
					return 1;
				else
					return 0;

			}
			else
			{
				if(year%4==0)
					return 1;
				else
					return 0;


			}
		}
        	return 0;
	}
    }
    return 0;


}
