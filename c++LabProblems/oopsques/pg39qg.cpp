#include<iostream>
using namespace std;
class base
{
 int arr[10];
};
class b1:public base{};
class b2:public base{};
class derived:public b1,public b2{};
int main()
{

    cout<<sizeof(derived);
    return 0;
}
