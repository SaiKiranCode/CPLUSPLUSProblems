#include<iostream>
using namespace std;
class top
{
    public:
    top()
    {
        cout<<"start top\n";
    }
    ~top()
    {
        cout<<"end top\n";
    }


};
class bottom:public top
{
    public:
    bottom()
    {
        cout<<"start bottom\n";
    }
    ~bottom()
    {
        cout<<"endbottom\n";
    }



};
class test
{
    public:

    test()
    {
        cout<<"start test\n";
    }
 bottom d;
};
int main()
{
    test me;
    return 0;
}
