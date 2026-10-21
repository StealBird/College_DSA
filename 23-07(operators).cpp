#include<iostream>
using namespace std;

class complex{
    private:
    float real;
    float imag;

    public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float r , float i)
    {
        real = r;
        imag = i;
    }

void display(){
    cout<<real<<"+"<<imag<<"j"<<endl;
}
};

int main(){
    complex c1(2.0,3.0);
    cout<<"complex number is: ";
    c1.display();
    complex c2(5.0, 7.0);
    cout<<"complex number is: ";
    c2.display();

    return 0;

}