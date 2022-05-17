#include <iostream>
#include "Withdrawal.h"
#include <cstring>

withdrawal::withdrawal(){
  withdrawalID=0;
  withdrawalDate=0;
}
withdrawal::withdrawal(int wID,int wDate){
  withdrawalID=wID;
  withdrawalDate=wDate;
}

void withdrawal:: calTotal(Income*i){
  totalIncome=i->getpublishertotal();
}

void transferAmount(){
  
};

withdrawal::~withdrawal(){
  //destructor
}
