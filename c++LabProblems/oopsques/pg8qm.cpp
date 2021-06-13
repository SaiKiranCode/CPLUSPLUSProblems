#include<iostream>
using namespace std;
class base
{
     virtual void method()
     {
        cout<<"from the base"<<endl;

     }
public :
virtual ~base()
{
    method();
}

void basemethod()
{
    method();

}

};
class A :public base
{
    void method()
    {
     cout<<"in a"<<endl;
    }
    public:
    ~A(){
        method();
    }



};
int main()
{
    base *baseptr=new A;
    baseptr->basemethod();
    delete baseptr;
    return 0;


}





