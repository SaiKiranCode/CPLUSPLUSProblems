#include<iostream>
using namespace std;
int main()
{
	int n;
	float sum=0;
	float avg;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	float* ptr= new float[n];
	cout<<"enter the marks one by one"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ptr[i];

	}
	cout<<"priting the entered numbers"<<endl;
       for(int i=0;i<n;i++)
        {
		sum=sum+ptr[i];
                cout<<ptr[i]<<endl;

        }
	avg=sum/n;
	cout<<"average marks is"<<avg<<endl;
	delete ptr;


	return 0;
}
