#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int a;
    float f;
    cout<<"Enter a value to convert into float: ";
    cin>>a;
    
    f= (float)a;
    // fixed is for printing decimal numbers and setprecision is for set decimal counts like(2)
    cout<<fixed<<setprecision (1);
    cout<<"float no. is: "<<f;
    
    return 0;
}