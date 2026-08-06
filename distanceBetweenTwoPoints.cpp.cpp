/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2,distance;
    cout<< "Enter x1 y1: ";
    cin>>x1>>y1;
    
    cout<<"Enter x2,y2: ";
    cin>>x2>>y2;
    distance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"distance is: "<<distance;
    

    return 0;
}