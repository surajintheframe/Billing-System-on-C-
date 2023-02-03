#include<iostream>
#include <string>
#include <string.h>
#include<stdio.h>
#include<stdio.h>
 #include<iomanip>
//#include<fstream>
#include"payment.cpp"
using namespace std;

class BakeryItems{
    public:
   float totalCakePrice, totalCoffeePrice , PriceTotal;
    public:
  
  float cakeDetails();
  float coffeeDetails();
  void cakeBill(float p){
    totalCakePrice=p;
    cout<<" cake price:" << p<<endl;
  } 
 void coffeeBill(float p){
     totalCoffeePrice=p;
     cout<<"coffee price:"<<p<<endl;
 } 
 void totalPrice(){
      PriceTotal = totalCakePrice+ totalCoffeePrice;
     cout<<"Total Price:"<<totalPrice <<endl;
 }
//
// float coffeeDetails(){
//	  int cup ;
//	  float price;
//     char coffeename;
//     cout<<"\n \n"<<endl;
// 	cout<<"-----------Coffees With their Rates-------------------------"<<endl;
//     cout<<" CoffeeName               Price "<<endl;
// 	cout<<"   Expresso             Rs.100 per cup"<<endl;
// 	cout<<"   Latte                 Rs.130 per cup"<<endl;
//	cout<<"Which coffee do you prefer to buy? :" <<endl;
//	cout<<" Press e  Expresso \n Press l for Latte "<<endl;
//	cin>>coffeename;
//    cout<<"How many cup do you want to buy? "<<endl;
//    cin>>cup;
//
//    if((coffeename== 'e')|| (coffeename== 'E'))
//    {
//      price = 100 * cup;
//
//    }else if((coffeename== 'l')|| (coffeename== 'L'))
//	 {
//      price = 130* cup;
//     }
//
//     return price;
//	
//}
//
//
// float cakeDetails(){
//      float pound , price;
//     char cakename;
//     cout<<"\n \n"<<endl;
// 	cout<<"-----------Cakes With their Rates-------------------------"<<endl;
//     cout<< setw(15)<<" CakeName " <<setw(15)<<"  Price "<<endl;
// 	cout<<"   Vanila Cake           Rs.500 per pound"<<endl;
// 	cout<<"   BlackForest Cake      Rs.600 per pound"<<endl;
//	cout<<"Which cake do you prefer to buy? :" <<endl;
//	cout<<" Press v Vanila Cake \n Press b for BlackForest "<<endl;
//	cin>>cakename ;
//    cout<<"How many pound do you want to buy? "<<endl;
//    cin>>pound;
//
//    if((cakename== 'v')|| (cakename== 'V'))
//    {
//      price = 500 * pound;
//
//    }else if((cakename== 'b')|| (cakename== 'B'))
//	 {
//      price = 600*pound;
//     }
//
//     return price;
//	
//}

};

  float BakeryItems:: cakeDetails(){
       float pound , price;
      char cakename;
      cout<<"\n \n"<<endl;
  	cout<<"-----------Cakes With their Rates-------------------------"<<endl;
      cout<< setw(15)<<" CakeName " <<setw(15)<<"  Price "<<endl;
  	cout<<"   Vanila Cake           Rs.500 per pound"<<endl;
  	cout<<"   BlackForest Cake      Rs.600 per pound"<<endl;
 	cout<<"Which cake do you prefer to buy? :" <<endl;
 	cout<<" Press v Vanila Cake \n Press b for BlackForest "<<endl;
 	cin>>cakename ;
     cout<<"How many pound do you want to buy? "<<endl;
     cin>>pound;

    if((cakename== 'v')|| (cakename== 'V'))
     {
       price = 500 * pound;

     }else if((cakename== 'b')|| (cakename== 'B'))
 	 {
       price = 600*pound;
      }
      

   return price;
	
 }

 float  BakeryItems:: coffeeDetails(){
 	  int cup ;
 	  float price;
      char coffeename;
      cout<<"\n \n"<<endl;
  	cout<<"-----------Coffees With their Rates-------------------------"<<endl;
      cout<<" CoffeeName               Price "<<endl;
  	cout<<"   Expresso             Rs.100 per cup"<<endl;
  	cout<<"   Latte                 Rs.130 per cup"<<endl;
 	cout<<"Which coffee do you prefer to buy? :" <<endl;
 	cout<<" Press e  Expresso \n Press l for Latte "<<endl;
	cin>>coffeename;
    cout<<"How many cup do you want to buy? "<<endl;
    cin>>cup;

   if((coffeename== 'e')|| (coffeename== 'E'))
   {
      price = 100 * cup;

    }else if((coffeename== 'l')|| (coffeename== 'L'))
	 {
      price = 130* cup;
      }

      return price;
	
}



void productFunction( int usrchoose)
{
BakeryItems  b;
User usrAcc;
Admin AdminAcc;
cout<<"\n \n \n";


if(usrchoose==1) 
{
    char test;
	float cakePrice =b.cakeDetails();
     cout<<"Do you want to test our coffee?y/n";
     cin>>test;
     if(test=='y')
     {
          float coffeePrice= b.coffeeDetails();
         b.cakeBill(cakePrice);
         b.coffeeBill(coffeePrice);

       usrAcc.balance -= b.PriceTotal;
       AdminAcc.balance += b.PriceTotal;
         b.totalPrice();
     }else{
           usrAcc.balance -= b.totalCakePrice;
        AdminAcc.balance += b.totalCakePrice;
          b.cakeBill(cakePrice);
     }
   

}else if(usrchoose==2){
	

     char test;
	float coffeePrice = b.coffeeDetails();
     cout<<"Do you want to test our cake?y/n";
     cin>>test;
     if(test=='y')
     {
          float cakePrice= b.cakeDetails();
           b.coffeeBill(coffeePrice);
          b.cakeBill(cakePrice);
            usrAcc.balance -= b.PriceTotal;
          AdminAcc.balance += b.PriceTotal;
          b.totalPrice();
        
     }else{
            usrAcc.balance -= b.totalCoffeePrice;
           AdminAcc.balance += b.totalCoffeePrice;
         b.coffeeBill(coffeePrice);
     }
}

}
