#include<iostream>
using namespace std;
class Time
{
	int hour,min,sec;
	public:
	void compute()
	{
		min=min+sec/60;
		sec=sec%60;
		hour=hour+min/60;
		min=min%60;
	
	
	}
	void enter_time()
	{
		cout<<"enter the time ";
		cin>>hour>>min>>sec;
			
	}	
	void display()
	{
		cout<<"time is "<<hour<<"-"<<min<<"-"<<sec<<endl;
	
	}
	Time sum(const Time &t)
	{
		Time temp;
		temp.sec=(sec+t.sec)%60;
		temp.min=(sec+t.sec)/60;
	
		temp.hour=(min+t.min+temp.min)/60;
		temp.min=(min+t.min+temp.min)%60;
		temp.hour=hour+temp.hour+t.hour;
		return temp;	
	
	}

};
int main()
{
	Time t1,t2,t3;
	t1.enter_time();
	t1.compute();
	t1.display();
	 t2.enter_time();
	 t2.compute();
        t2.display();
	t3=t1.sum(t2);
	t3.display();
	return 0;





}




