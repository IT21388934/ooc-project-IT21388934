#include <iostream>
#include "NormalUser.h"
#include <cstring>

NormalUser::NormalUser(){
  strcpy (userID[10],"");
  strcpy (userPassword[12],""); 
  phoneNo=0;
}

NormalUser::( const char cuserID[], const char cpassword[],int cphoneNo,const char cName[], const char cemail[]):visitor ( const char cName[], const char cemail[])
{
  strcpy (userID,cuserID);
  strcpy (userPassword,cpassword); 
  phoneNo=cphoneNo;
}

void login(){
  
};

void becomePubliser(){
  
};

NormalUser::~NormalUser(){
  //destructor
}
