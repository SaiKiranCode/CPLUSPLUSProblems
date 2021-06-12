#include<iostream>
using namespace std;
#include<stdlib.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;

}
int main()
{
	int n;
	cout<<"enter the number of elements in array ";
	cin>>n;
	int *arr=new int[n];
	cout<<"enter the  elements in array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"elements in  array is"<<endl;
	    for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<"\t";
        }
	cout<<"\n";
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		swap(&arr[i],&arr[j]);
	}
     cout<<"elements in  array after reversing  is"<<endl;
            for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<"\t";
        }
	cout<<"\n";


	return 0;
}
