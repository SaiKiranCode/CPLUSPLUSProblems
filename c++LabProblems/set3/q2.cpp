#include<iostream>
using namespace std;
int main()
{
	int n=50;
	int sum=2;
	int count=1;
	
	for(int i=3;;i++)
	{
		int flag=0;
		for(int j=2;j<i;j++)	
		{
			if(i%j==0)
			{
				flag=1;
			}
			
		}
		if(flag==0)
		{
			sum=sum+i;
			count++;
		}
		if(count==n)
		{
			break;
		}

	}

	cout<<"sum of "<<n<<"primenumbers"<<sum<<endl;

	return 0;






}
