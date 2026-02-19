#include <iostream>
#include <iomanip>
using namespace std;
class BankAccount{
string accountHolderName;
int AccountNumber;
double balance;
public:
void inputDetails(){

    cout<<"enter holder name: ";
    getline(cin, accountHolderName);
    cout<<"enter account number: ";
    cin>>AccountNumber;
    cout<<"enter balance: ";
    cin>>balance;
}
void displaydetails(){

    cout<<endl<<"name: "<<accountHolderName<<endl<<"account number: "<<AccountNumber<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"balance: "<<balance;
}

void deposit(double amount){
    cout<<fixed<<setprecision(2);
    balance = balance + amount;
    cout<<"balance is: "<<balance;
}
void withdraw(double amount){
    if(amount>balance)
    cout<<"insufficient balance";
    else if(amount <= balance ){
        cout<<fixed<<setprecision(2);
        balance = balance - amount;
        cout<<"balance: "<<balance;
    }

}

};

int main(){
    BankAccount b1;
    double amount;
    b1.inputDetails();
    cout<<"enter amount you want to deposit: ";
    cin>>amount;
    b1.deposit(amount);
    cout<<endl<<"enter amount you want to withdraw: ";
    cin>>amount;
    b1.withdraw(amount);
    cout<<endl;
    b1.displaydetails();
}
