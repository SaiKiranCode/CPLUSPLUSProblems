#include<iostream>
using namespace std;
int reverse(int x)
{
	int r;
	int t=0;
	while(x>0)
	{
		r=x%10;
		t=t*10+r;
		x=x/10;

	}
	return t;


}


int main()
{
	int n;
	cout<<"enter the number to reverse it";
	cin>>n;
	cout<<" \nreverse number is"<<reverse(n);

	return 0;
}
