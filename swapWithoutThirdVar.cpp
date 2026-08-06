#include <iostream>
using namespace std;
void swapnumber(int a,int b)
{
    int c;
       a=a+b;
       b=a-b;
       a=a-b;
        cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"enter a,b: ";
    cin>>a>>b;
    swapnumber(a,b);

    return 0;
}