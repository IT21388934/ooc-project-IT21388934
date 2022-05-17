#include "Income.h"
#include <iostream>
#include <cstring>
using namespace std;

Income::Income(){
  referenceID=0;
  incomeDate=0;
  strcpy(incomeDiscription,"");
}

Income::Income(int rId, int iDate,const char iDiscrip){
  referenceID=rId;
  incomeDate=iDate;
  strcpy(incomeDiscription,iDiscrip);
}

void Income::calIncome(Payment*p){
  systemIncome=(20/100)*p->getpaymentAmount();
  publisherIncome=(80/100)*p->getpaymentAmount();
};

double Income:: getpublishertotal(){
  
};
void Income::displayIncome(){
  cout << "Income Details"<<endl;
  cout << "Reference : "<< referenceID<<endl;
  cout << "Income Date : "<< incomeDate<<endl;
  cout << "Income Discriotion"<< incomeDiscription<<endl;
  cout << "System Income"<< systemIncome<<endl;
  cout << " Publisher Income"<< publisherIncome <<endl;
};

Income::~Income(){
  //destructor
}

