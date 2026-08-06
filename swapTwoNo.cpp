#include <iostream>
using namespace std;
void swapno(int a,int b)
{
    int c;
        c=a;
        a=b;
        b=c;
        cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"enter a,b: ";
    cin>>a>>b;
    swapno(a,b);

    return 0;
}