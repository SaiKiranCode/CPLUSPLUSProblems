#include<iostream>
using namespace std;
int change(int &x)
{
    x=10;
    return 20;
}
int main()
{
int i=30;
    cout<<change(i);
    return 0;

}
