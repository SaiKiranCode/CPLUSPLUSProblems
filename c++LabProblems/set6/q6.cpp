#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void oddswap(int *arr,int n)
{
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if((arr[i])%2==1||(arr[j])%2==1)
		{
			swap(arr[i],arr[j]);
		}
		


	}


}





int main()
{
	int n;
	cout<<"enter the number of elements in array"<<endl;
	cin>>n;
	int *arr=new int[n];
	cout<<"enter the elements in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"elements in array\n";
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<"\t";
	}
	 oddswap(arr,n);
	 cout<<"elements after swapping"<<endl;
	 for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<"\t";
	}
	return 0;
}