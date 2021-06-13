#include<iostream>
using namespace std;
int main()
{
    int a=100;
    int b=200;
    int *p=&a,*q=&b;
    p=q;

    cout<<" p is"<<*p<<" q is "<<*q<<"  a is "<<a<<"b is "<<b;

}
