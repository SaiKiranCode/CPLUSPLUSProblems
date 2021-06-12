#include<iostream>
using namespace std;
#define MAXSIZE 30
int main()
{
	int n;
	int *p;
	int arr[MAXSIZE];
	cout<<"enter the number elements in array ";
	cin>>n;
	cout<<"enter the elements in the array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}
       cout<<" the elements in the array"<<endl;
        for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<"\t";

        }
	p=arr;
	for(int i=0;2*i+1<=n;i++)
	{
		*p=*p*2;
		p=p+2;
	}
       cout<<" the elements in the array"<<endl;
        for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<"\t";

        }

	return 0;
}
