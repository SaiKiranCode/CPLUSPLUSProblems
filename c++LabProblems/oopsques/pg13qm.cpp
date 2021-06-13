#include<iostream>
using namespace std;
int main()
{
    char *ptr="abcd";
    char ch;
    ch=++*ptr++;
    cout<<ch;
    return 0;


}
