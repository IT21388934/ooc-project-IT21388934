#include "Report.h"
#include <iostream>
#include <cstring>

Report::Report(){
  reportID=0;
  strcpy(reportType,"");
  reportDate=reDate;
  
}Report::Report(int reID, const char reType[], int reDate){
  reportID=reID;
  strcpy(reportType,reType);
  reportDate=reDate;
}

void Report::createReport(){
  
};
Report::~Report(){
  //destructor
}
