#include<iostream>
#include<tuple>
using namespace std;
int main()
{
	tuple<string,int,int>p;
   	pair<int,int>t;
	t=make_pair(56,26);
	std::cout<<t.first;
	std::cout<<t.second;
	p=make_tuple("hello",90,87);
	std::cout<<get<0>(p);
	std::cout<<get<1>(p);
	std::cout<<get<2>(p);

}
