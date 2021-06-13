#include<iostream>
using namespace std;
void you(long a,long b)
{
    cout<<"long";
}
void you(double a,double b)
{
    cout<<"double";
}
int main()
{
    int a,d;
    you(a,d);
    return 0;


}
