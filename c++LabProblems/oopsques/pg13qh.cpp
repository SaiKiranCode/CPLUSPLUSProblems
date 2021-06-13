#include<iostream>
using namespace std;
int main()
{
    int a=10;

    int const &b=a;
    a=11;

    cout<<a<<b;
    return 0;


}
