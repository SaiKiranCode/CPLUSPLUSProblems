#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 10;


    }
    catch(char *exp)
{    cout<<"caught"<<exp;
}
    catch(...)
    {
        cout<<"default"<<endl;
            }
            return 0;
}
