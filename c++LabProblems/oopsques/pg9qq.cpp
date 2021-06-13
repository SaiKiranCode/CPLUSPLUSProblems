#include<iostream>
using namespace std;
int x;
int& setx()
{
    return x;

}
int main()
{
    setx()=92;
    cout<<"x="<<x<<endl;
    return 0;


}
