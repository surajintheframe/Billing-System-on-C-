
#include<iostream>
#include <string>
#include<fstream>
#include"auth.cpp"
#include"product.cpp"
#include"payment.cpp"
#include"ErrHandling.cpp"
 #include<iomanip>
using namespace std;

int main()
{

try{	

int choose;
cout<<"------------------------------------------------------------------------------------------" <<endl;
cout<<"\n \n";
cout<< "Enter what do you want : "<<"\n" << " 1 for SignUP " << "\n " << "2 for Loin " << endl;
cin>> choose;
if(choose!=1|| choose!=2)
{
throw  (ErrHandling(401 , "Authentication Error : please enter 1 , 2 "));
}
authFunction(choose);
}
catch(ErrHandling e){
	e.err_display();
}	


try{
cout<<"\n \n \n";
cout<<"******************WELOCOME TO BLACKBERRY BAKERY*********************************** "<<endl;

int usrchoice;
cout<<"\n \n";
cout<<setw(10)<<" What do you want to order Cake or Coffee" <<endl;
cout<<" Press 1 for cake \n Press 2 for coffee" <<endl;
cin>>usrchoice;
productFunction(usrchoice);
}
catch(ErrHandling e){
  e.err_display();
}

char bankD;
cout<<"Do you want to see bankDetails:y/n"<<endl;
cin>>bankD;
if(bankD=='y'){
  //cout<<"User"
  UsrBankBalance();
}
	
	
	
}
