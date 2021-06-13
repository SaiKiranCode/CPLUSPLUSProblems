#include<iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout<<"constructer\n";
    }
    ~Test()
    {
        cout<<"destructer\n";
    }
};
int main()
{
    try
    {
        Test t1;
        throw 10;
    }
    catch(int i)
    {
        cout<<"caught "<<i<<endl;

    }



}
