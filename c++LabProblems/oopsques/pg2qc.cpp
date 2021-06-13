#include<iostream>
using namespace std;
class some
{
    public:
    some()
    {
        cout<<"some ones constr"<<endl;
    }
    ~some()
    {
        cout<<"some ones des"<<endl;
    }
};
int main()
{
    some s;
//    s.some();
    s.~some();
    s.~some();

    return 0;

}
