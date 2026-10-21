#include<iostream>
using namespace std;
 
class rectangle{
public:
float length;
float breadth;

float calculate_Area(){

    return length*breadth;
}
};

  int main(){
    rectangle r1;
    r1.length = 10;
    r1.breadth = 20;
    cout<<"Area of rectangle r1 is: " <<r1.calculate_Area()<<endl;
    rectangle r2;
    r2.length = 50;
    r2.breadth = 10;
    cout<<"Area of rectangle r2 is: "<<r2.calculate_Area()<<endl;
    

    return 0;

}