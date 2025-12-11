/* A simple calculator program that lets the user add, subtract, multiply and divide two number 
   And repeat the process as many times they want */


#include <iostream>
#include <cmath>
using namespace std;

class temp
{
public:
    int a, b, c;
    char op;

    void getval1();
    void getval2();
    char getop();
    void add();
    void sub();
    void mul();
    void div();
    void logo();

} cal;
void temp::getval1(void){
    cout<<endl<<"First num"<<endl;
    cin>>a;
}
void temp::getval2(void){
    cout<<"Second num"<<endl;
    cin>>b;
}
char temp::getop(void){
    cout<<"Your operator"<<endl;
    cin>>op;
    switch (op){
        case '+':
        add();
        break;
        case '-':
        sub();
        break;
        case '*':
        mul();
        break;
        case '/':
        div();
        break;
        case '#':
        logo();
        break;
        default:
        cout<<"Your requirment is not available"<<endl<<"Tough luck";
        break;
    }
}
void temp::add(void){
    cout<<"The Sum of "<<a<<" & "<<b<<":: "<<(a+b);
}
void temp::sub(void){
    cout<<"The Difference of "<<a<<" & "<<b<<":: "<<(a-b);
}void temp::mul(void){
    cout<<"The Multiplication of "<<a<<" & "<<b<<":: "<<(a*b);
}
void temp::div(void){
    cout<<"The Quotient of "<<a<<"by"<<b<<":: "<<(a/b);
}
void temp::logo(void){
    cout<<"The log of "<<a<<"with base "<<"e"<<":: "<<log(a);
}

int main()
{
cout<<"Welcome to your calculator";
char c='y';

do {
    
    cal.getval1();
    cal.getval2();
    cal.getop();
    cout<<endl<<"Do you wanna continue?....y/n";
    cin>>c;
}while(c!='n');

    return 0;
}
