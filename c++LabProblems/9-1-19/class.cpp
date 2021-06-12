#include<iostream>
using namespace std;
class flight
{
	int flightno;
	float dis;
	char dest[30];
	float fuel; 
	public:
	void calfuel()
	{
		if(dis<=1000)
		{
			fuel=500;

		}	
		else
		{
			if(dis>1000&&dis<=2000)
			{

				fuel=1100;
			}
			else
			{
				fuel=2200;
			}

		}




	}
	void feedinfo()
	{
		cout<<"enter the flight number";
		cin>>flightno;
		cout<<"enter the destination";
		cin>>dest;
		cout<<"enter the distance";
		cin>>dis;
		calfuel();


	}
	void display()
	{
		cout<<"flight number is"<<flightno<<endl;
		cout<<"destination is"<<dest<<endl;
		cout<<"distance is"<<dis<<endl;
		cout<<"fuel is "<<fuel<<endl;



	}



};




int main()
{
	flight f;
	f.feedinfo();
	f.display();

	return 0;
}
