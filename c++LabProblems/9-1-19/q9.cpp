#include<iostream>
using namespace std;
class batsman
{
	int bcode;
	char bname[20];
	int innings,notout,runs;
	float batavg;
	void calavg()
	{
		if(innings==notout)
		{
			cout<<"cannot be calulated";

		}
		else
		{
			if(innings<notout)
			{
				cout<<"enter the valid data";
			}
			else
			{
				batavg=runs/(innings-notout);
			}
		}

	}
	public:
	void readdata()
	{
		cout<<"enter the name";
		cin>>bname;
		cout<<"enter the code";
		cin>>bcode;
		cout<<"enter the runs";
		cin>>runs;
		cout<<"enter the inings";
		cin>>innings;
		cout<<"enter the notouts";
		cin>>notout;
		calavg();
		


	}
	void display()
	{
		cout<<"name is"<<bname<<endl;
		cout<<"code is "<<bcode<<endl;
		cout<<"innings played are"<<innings<<endl;
		cout<<"runs scored"<<runs<<endl;
		cout<<"no  of notouts"<<notout<<endl;
		cout<<"bat average"<<batavg<<endl;

	}


};




int main()
{
	batsman b1;
	b1.readdata();
	b1.display();

	return 0;
}
