#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
int empld;
string name;
double monthSalary;
public:
void inputDetails(){
    cout<<fixed<<setprecision(2);
    cout<<"name: ";
    getline(cin,name);
    cout<<"ID:";
    cin>>empld;
    cout<<"monthly salary: ";
    cin>>monthSalary;
}
double calculateAnnualSalary(){
    return monthSalary*12;
}
void displayDetails(){
    cout<<fixed<<setprecision(2);
    cout<<"name: "<<name<<endl;
    cout<<"ID: "<<empld<<endl;
    cout<<"annual salary: "<<calculateAnnualSalary();
}
};
int main(){
    Employee e1;
    e1.inputDetails();
    e1.calculateAnnualSalary();
    e1.displayDetails();
}
