#include<iostream>
using namespace std;
int& now()
{
    int where=1;
    return where;

}
int main()
{
    int where;
    where=now();
    cout<<where;
    return 0;

}
