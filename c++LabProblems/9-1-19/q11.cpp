#include<iostream>
using namespace std;
int arr[50];
void printnumber(int);

int main()
{
	int n;
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the elements one by one";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"printing the triangle"<<endl;
	printnumber(n);
	return 0;
}
void printnumber(int n)
{
	int j;
	int t=n;
	for(int i=0;i<n;i++)
	{
		for(j=0;j<t;j++)
		{
			cout<<arr[j]<<"\t";

		}
		j=0;
		cout<<"\n";
		for(int k=0;k<t-1;k++)
		{
			arr[k]=arr[k]+arr[k+1];
		}
		--t;

	}



}
