#include<iostream>
#include<math.h>
using namespace std;
class account
{
	float deposit,roi,time;
	public:
	account(float deposit,float time)
	{
		this->deposit=deposit;
		this->time=time;
		if(time>=5)
		{
			roi=10;
		}
		else
		{
			if(deposit<2000&&time>=2)
			{
				roi=5;
			}
			else
			{
				if(2000<deposit&&deposit<6000&&time>=2)
				{
					roi=7;
				}
				else
				{
					if(deposit>=6000&&time>=1)
					{
						roi=8;
					}
					else
					{
						roi=3;			
					}
				}

			}
		}

	}
	double balance()
	{
		return deposit*pow(1+(roi/100),(int)time)+deposit*pow(1+(roi/100),(int)time)*(time-(int)time)*roi/100;
	}
	void show()
	{
		cout<<"deposit is "<<deposit<<endl;
		cout<<"time is "<<time<<endl;
		cout<<" rate of interest is "<<roi<<endl;
		cout<<"balance is "<<balance()<<endl;
	}



};




int main()
{
	account a(3000,6.3);
	a.show();


	return 0;
}
