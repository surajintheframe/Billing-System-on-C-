
#include<iostream>
#include <string>
#include<fstream>
#include"auth.cpp"
#include"ErrHandling.cpp"
 #include<iomanip>
using namespace std;

// class UserBalance : public  User{
//     public:
//     float balance;

// };

// class AdminBalance : public Admin{
//   public:
//   float balance;

// };

void UsrBankBalance()
{
User usrAcc;
  int choice;
cout<<"Your Balance Details ;"<<endl;
cout<<"Press 1 to see current balance amount"<<endl;
cout<<"Press 2 to deposite  balance "<<endl;

if(choice==1)
{
  cout<<"Your current balance is:" <<usrAcc.balance << endl; 
}
else if(choice==2){
  int depositeAmt;
  cout<<"Enter amount that you want to deposite:"<<endl;
   cin>>depositeAmt;
  usrAcc.balance += depositeAmt;

}
}

void AdminBankBalance()
{
Admin AdminAcc;
  int choice;
cout<<"Your Balance Details ;"<<endl;
cout<<"Press 1 to see current balance amount"<<endl;
cout<<"Press 2 to withdraw  balance "<<endl;

if(choice==1)
{
  cout<<"Your current balance is:" <<AdminAcc.balance << endl; 
}
else if(choice==2){
  int depositeAmt;
  cout<<"Enter amount that you want to deposite:"<<endl;
   cin>>depositeAmt;
  AdminAcc.balance -= depositeAmt;

}
}


