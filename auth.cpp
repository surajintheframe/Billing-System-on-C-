#pragma once
#include<iostream>
#include <string>
#include <string.h>
#include<stdio.h>
#include<stdio.h>
#include<iomanip>
#include<fstream>
#include"product.cpp"
using namespace std;



// int user_count=0;
class Admin{
public:
 float balance;
};


class User{ //storing signUp data
   public:
	 char name[30];
	char phone[11];
	char password[26];
	 float balance;
	char phn[11],pswd[100];// for login
    public: 
    // User(){
    // 	user_count++;
	// }
    
 void signUp()
	  {
 		cout<< "Enter your name : ";
 		 scanf(" %[^\n]%*c",&name);
 		// cin>> name;
 		cout<<"Enter your phone no: ";
 	     cin>>phone;
 		cout<< "Set password : " ;
 		cin>>password;	
	  }	

void logIn()
     {
 		
 		cout<<"Enter your phone no: ";
 		cin>>phn;
 		cout<< "Enter password : " ;
 		cin>>pswd;		
	 }

  };



void authFunction(int choice)
{


	User usr;
	
	if(choice==1){
		char test;
	usr.signUp();
	
	cout<<"SignUp Success..! "<<endl;
	cout<<"Do you want to logIn: y/n";
	 cin>>test;
	 if(test=='y'){
	 		usr.logIn();
	 }

	}
	else if(choice==2){
		usr.logIn();
	}else{
	//	throw  Err Handling class
	cout<< "Bad Input ";
	}
	


  if(( strcmp(usr.password,usr.pswd)!=0 )&& (strcmp(usr.phone,usr.phn)!=0)){
  	
  	cout<< "Invalid contact number or password! ";
  }else{
  	cout<<"Login successfull ";
  }

}

 







