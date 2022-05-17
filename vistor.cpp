#include <iostream>
#include "visitor.h"
#include <cstring>

visitor:: visitor(){
  strcpy(name[20],"");
  strcpy (email[30],"");
}

visitor::visitor ( const char cName[], const char cemail[]){
  strcpy(name,cName);
  strcpy(email,cemail);
}

void visitor:: searchrecipe(){
  
}

visitor::~visitor(){
  //destructor
}
