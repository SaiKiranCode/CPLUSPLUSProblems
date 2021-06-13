#include<iostream>
using namespace std;
char str[100]="abcde mno";
char &func(int i)
{
    return str[i];
}
int main()
{
    func(4)='t';
    cout<<str;
    return 0;
}
