#include<iostream>
#include<string.h>

using namespace std;

class ErrHandling{
	int err_code;
	char* err_msg;
	public:
		ErrHandling(int c ,  char* msg){
			err_code = c;
			err_msg = new char[strlen(msg)];
			strcpy(err_msg , msg);	
		}
	    void err_display(){
	    	cout<< "Error Code :" << err_code << "\n"<< "Error message: "<<err_msg <<endl; 
		}	
};

