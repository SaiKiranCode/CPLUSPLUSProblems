#include<iostream>
using namespace std;
class a
{
    public:
    a()
    {
        this->foo();
    }
    virtual void foo()=0;


};
class b:public a
{
    public:
    b()
    {
        this->foo();

    }
    virtual void foo()
    {
        cout<<"b::foo\n";
    }




};
int main()
{
    b obj;
    return 0;

}
