#include<iostream>
using namespace std;
class test
{
    public :
    test()
    {
        cout<<"constructer";
    }



};
int main()
{
    cout<<"start";
    test t1();
    cout<<"end";
    return 0;
}
