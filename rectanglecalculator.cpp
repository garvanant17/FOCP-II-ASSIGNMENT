#include <iostream>
using namespace std;
class Rectangle{
float length;
float width;
//float area;
//float perimeter;
public:
void inputDimension(){
    cout<<"enter length and width: ";
    cin>>length>>width;
    //calculateArea();
    //calculatePerimeter();
}
void displayResult(){
    cout<<"area: "<<calculateArea()<<endl<< "perimeter: "<<calculatePerimeter();
}
private:
float calculateArea(){
    return length*width;
    //return area;
}
float calculatePerimeter(){
     return 2*(length+width);
    //return perimeter;
}
};

int main(){
    Rectangle r1;
    r1.inputDimension();
    r1.displayResult();
}
