#include "Payment.h"
#include "Report.h"

class Income{
  private:
    int referenceID;
    int incomeDate;
    int systemIncome;
    int publisherIncome;
    char incomeDiscription[50];
    Report*report;

  public:
    Income();
    Income(int rId, int iDate,const char iDiscrip);
    void calIncome(Payment*p);
    void displayIncome();   
    double getpublishertotal();
    ~Income();
}
