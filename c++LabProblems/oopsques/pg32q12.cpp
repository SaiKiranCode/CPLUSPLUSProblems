#include<iostream>
using namespace std;
class myclass
{public:
    int a;

    myclass()
    {
        a=10;
    }
    void f()
    {
        a=20;
        cout<<a;
    }



};
int func()
{
    myclass ob;
    int c;
   //cout<<ob.f();
    c=ob.a;
    cout<<c;
    return c;



}
int main()
{
    myclass ob;
    ob.f();
    cout<<func();


}
