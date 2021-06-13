#include<iostream>
using namespace std;
class base
{
    public:
    void basefun()
    {
        cout<<"from base"<<endl;

    }


};
class deri:public base
{
    public:
    void basefun()
    {
        cout<<"from derived"<<endl;

    }



};
void somefun(base *baseobj)
{
    baseobj->basefun();
}
int main()
{
    base bj;
    somefun(&bj);
    deri di;
    somefun(&di);
    return 0;

}
