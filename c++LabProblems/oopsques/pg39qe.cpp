#include<iostream>
using namespace std;
class top
{
    public:
    void foo(char *s){cout<<"top";}
    void foo(float a){cout<<"top too"; }




};

class bottom:public top
{
    public:
    //void foo(const int a){cout<<"bottom ";}
    void foo(float a){cout<<"bottom too";}




};
int main()
{
    bottom *b,b1;
 b->foo(5.5);
b1.foo(23);
 //   b->foo("cal");
    return 0;


}

