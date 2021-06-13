#include<iostream>
using namespace std;
class base
{
public :
int bval;
base()
{
    bval=0;
}


};
class deri:public base
{
    public :
    int dval;
    deri()
    {
    dval=1;
    }







};
void somefunc(base *arr,int size)
{
    for(int i=0;i<size;i++)
    cout<<arr->bval;
    cout<<endl;



};
int main()
{
    base basearr[5];
    somefunc(basearr,5);
    deri deriarr[5];
    somefunc(deriarr,5);
    return 0;





}





