#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k=1;
	cout<<"enter the no of rows triangle";
	cin>>n;

	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<k<<"\t";
			k++;
		}
		cout<<"\n";
	}
	return 0;








}
