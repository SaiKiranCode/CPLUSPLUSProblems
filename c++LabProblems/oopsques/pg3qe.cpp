//output :segmentation fault


#include<iostream>
using namespace std;
class opoverload
{
    public :
    bool operator ==(opoverload temp);
};
bool opoverload::operator==(opoverload temp)
{
    if(*this==temp)
    {
        cout<<"same";
        return true;

    }
    else
    {
        cout<<"different";
        return false;
    }
}
int main()
{
    opoverload s1,s2;
    s1==s2;
    return 0;

}
