#include <iostream>
#include "Payment.h"
#include <cstring>

Payment::Payment(){
  paymentID = 0;
  paymentDate = 0;
  strcpy(paymentMethod,"");
  paymentAmount=0;
}

Payment::Payment(int pId, int pDate, char pMethod[],double pAmount){
  paymentID = pId;
  paymentDate = pDate;
  strcpy(paymentMethod, pMethod);
  paymentAmount=pAmount;
};

void Payment::validatePayment(){
  
}

double Payment::getpaymentAmount(){
  return paymentAmount;
};

Payment::~Payment(){
  //destructor
}
