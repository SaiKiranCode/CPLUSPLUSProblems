#include<iostream>
using namespace std;
int&  setx()
{
    int x=3;

    return x;
}
int main()
{
    int a;
    a=setx();
    cout<<a;



    return 0;

}
