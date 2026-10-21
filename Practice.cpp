#include<iostream>
using namespace std;
int main()
{
    int num1{}, num2{};
    cout<<"Enter Num 1: ";
    cin>>num1;
    cout<<"Enter Num 2: ";
    cin>>num2;
    
    cout<<"Addition is: "<<num1+num2<<endl;
    cout<<"subtraction is: "<<num1-num2<<endl;
    cout<<"Multiplication is: "<<num1*num2<<endl;
    cout<<"Division is: "<<float(num1/num2)<<endl;
    cout<<"Remainder is: "<<num1%num2<<endl;


    return 0;
}