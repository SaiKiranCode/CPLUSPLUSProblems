#include<iostream>
using namespace std;
float interest(float prin,int rof=3,float year=1)
{
	return (prin*rof*year)/100;
}

int main()
{
	float prin;
	
	cout<<"simple interest is "<<interest(1000,4,5)<<endl;
	cout<<"simple interest is "<<interest(1000)<<endl;
	return 0;
}
