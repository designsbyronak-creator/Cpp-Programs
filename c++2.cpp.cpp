/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void add(int a,int b){
    int c=a+b;
    cout<<"add. is= "<<c;
}
void sub(int a ,int b){
    cout<<"\nsub. is = "<<a-b;
}
void mult(int a ,int b){
    cout<<"\nmult. is = "<<a*b;
}
void division(int a ,int b){
    cout<<"\ndivision. is = "<<a/b;
}


int main()
{
    int a,b;
    cout<<"enter a&b= ";
    cin>>a>>b;
    add(a,b);
    sub(a,b);
    mult(a,b);
    division(a,b);

    return 0;
}