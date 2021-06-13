#include<iostream>
using namespace std;
class OCTAL
{
    int n;
    public:
    OCTAL(int k)
    {
        n=0;
        int i=1;
        int rem;
        while(k!=0)
        {
            rem=k%8;
            k=k/8;
            n=n+rem*i;
            i=i*10;

        }

    }
    int display()
    {
        return n;
    }

};
int main()
{
    OCTAL h=64;
    cout<<h.display();



}


