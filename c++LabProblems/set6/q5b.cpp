#include <iostream>
using namespace std;
class Base1
{
protected:
int SampleDataOne;
public:
Base1()
{
SampleDataOne = 100;
}
~Base1()
{
}
int SampleFunctOne()
{
return SampleDataOne;
}
};
class Base2{
protected:
int SampleDataTwo;
public:
Base2()
{
SampleDataTwo = 200;
}
~Base2()
{
}
int SampleFunctTwo()
{
return SampleDataTwo;
}
};
class Derived1 : public Base1, public Base2
{
int MyData;
public:
Derived1()
{
MyData = 300;
}
~Derived1()
{
}
int MyFunct()
{
return (MyData + SampleDataOne + SampleDataTwo);
}
};
int main()
{
Base1 SampleObjOne;
Base2 SampleObjTwo;
Derived1 SampleObjThree;
cout << SampleObjThree.Base1 :: SampleFunctOne() << endl;cout << SampleObjThree.Base2 :: SampleFunctTwo() << endl;
return 0;
}
