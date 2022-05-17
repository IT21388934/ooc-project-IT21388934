#include <iostream>
#include "Publisher.h"
#include <cstring>


Publisher::Publisher(){
  strcpy(pID[10],"");
  strcpy(pPassword[12],"");
}

Publisher::Publisher(const char publisherID[],const char publisherpass[],const char cuserID[], const char cpassword[], int cphoneNo, const char cName[], const char cemail[]):NormalUser(cuserID[],cpassword[],cphoneNo,cName[],cemail[]){
  
  strcpy(pID,publisherID);
  strcpy(pPassword,publisherpass);
  
}

void login(){
  
};

void makewidthdraw(){
  
};

Publisher::~Publisher(){
  //destructor
}
