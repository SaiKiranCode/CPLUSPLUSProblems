#include<iostream>
using namespace std;
class base
{
    public:
void    out()
    {
        cout<<"base";
    }


};
class deri:public base
{
    public:
    void out()
    {
        cout<<"derri";
    }
};
int main()
{
    deri dp[3];
    base *bp=(base *)dp;
    for(int i=0;i<3;i++)
    (bp++)->out();
    return 0;



}
