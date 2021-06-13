// delete[] str;

#include<iostream>
using namespace std;
class my
{
    char *str;
    public:
    my()
    {
        str=new char[10];

    }
    ~my()
    {
        delete[] str;
    }


};


int main()
{
    my ob;

    return 0;




}
