#include<iostream>
using namespace std;
template <class x>
void fun( x a)
{
	cout<<"inside function with one argument"<<endl;

}
template<class x,class y>
void fun( x a, y b)
{
	cout<<"inside function with two arguments"<<endl;

}


int main()
{
	fun(19);
	fun(22,55);




	return 0;
}
