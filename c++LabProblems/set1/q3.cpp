#include<iostream>
using namespace std;
void swapbyvalue(int a, int b)
{
	int t;
	cout<<"value before swapping in call by value fn  is "<<a<<"\t"<<b<<endl;

	t=a;
	a=b;
	b=t;
	   cout<<"value after swapping in call value fn is "<<a<<"\t"<<b<<endl;



}
void swapbyref(int *a ,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;

}



int main()
{
	int x,y;
	cout<<"enter the two numbers to swap"<<endl;
	cin>>x>>y;
	cout<<"value before swapping is "<<x<<"\t"<<y<<endl;
	swapbyvalue(x,y);
   cout<<"value after swapping in call value main  is "<<x<<"\t"<<y<<endl;
	swapbyref(&x,&y);
       cout<<"value after swapping by reference  is "<<x<<"\t"<<y<<endl;


	return 0;
}
