#include<iostream>
using namespace std;
struct a
{
    int count;
};
struct b
{
    int* value;
};
struct c:public a,public b
{



};
int main()
{
    c* p=new c;
    p->value=0;
    cout<<"inherited";
    return 0;



}
