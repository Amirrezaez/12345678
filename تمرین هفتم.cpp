#include <iostream>
#define pi 3.14
using namespace std;
float amir(int t)
{
    return pi*t*t;
}
float reza(int o)
{
    return pi*o*2;
}
int main()
{
    int r;
    cout<<"enter Radius:";
    cin>>r;
    cout<<"Area of circle is:"<<amir(r)<<endl;
    cout<<"perimeter of circle is :"<<reza(r);
    return 0;
}