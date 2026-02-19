#include<iostream>
#include <iomanip>
using namespace std;
class Book{
string title, author;
double price;
public:
void inputDetails(){
    cout<<"enter title: ";
    cin>>title;
    cout<<"enter author name: ";
    cin>>author;
    cout<<"enter price: ";
    cin>>price;
}
void displayDetails(){
    cout<<fixed<<setprecision(2);
    cout<<endl<<"title: "<<title<<endl<<"author: "<<author<<endl<<"price of book: "<<price;
}
};
int main(){
 Book b1;
 b1.inputDetails();
 b1.displayDetails();
}
