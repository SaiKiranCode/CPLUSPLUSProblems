#include<iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 20;


        }
        catch(int n)
        {
        cout<<"partial\n";
        throw;
        }


    }
    catch(int n)
    {
        cout<<"remain\n";
    }

return 0;
}
