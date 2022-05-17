#include "Payment.h"
#include "Administrator.h"
#include "Income.h"

class Report{
  private:
    int reportID;
    char reportType;
    int reportDate;
    Payment*payment[SIZE];
    Income*income[SIZE];
    Administrator*admin;
public:
    Report();
    Report(int reID, const char reType[], int reDate);
    void setreport();
    void createReport();
    ~Report();
}
