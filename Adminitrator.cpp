#include "Administrator.h"
#include <iostream>
#include <cstring>

Administrator::Administrator(){
  strcpy(adminID,"");
  strcpy(adminName,"");
  strcpy(adminemail,"");
  adminphoneNo=0;
  strcpy(adminpassword,"");
};
Administrator::Administrator(int aID, char aName[],  char aEmail[], int aPhoneNo, char aPassword[] ){
  strcpy(adminID,aID);
  strcpy(adminName,aName);
  strcpy(adminemail,aEmail);
  adminphoneNo=aPhoneNo;
  strcpy(adminpassword,aPassword);
}


void Administrator::setlogin(){
  
}

void Administrator::displayAdminDetails(){
  
}

Administrator::~Administrator(){
  //destructor
}
