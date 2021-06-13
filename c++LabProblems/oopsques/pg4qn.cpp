#include<iostream>
using namespace std;
int A=10;
float functionB(int A,float C,char B=5)
{
    return ::A+B+C;
}
int main()
{
    int A=2;
    float X=11.1;
    cout<<functionB(A,X);
    return 0;




}




//output error
