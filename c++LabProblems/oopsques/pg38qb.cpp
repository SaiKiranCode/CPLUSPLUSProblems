//error
#include<iostream>
using namespace std;
int main()
{
    const char *what="is this";
    what="interesting";
     cout<<*what;
    what[3]='a';
    cout<<*what;
    return 0;



}
