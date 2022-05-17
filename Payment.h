#include "Recipe.h"
#include "Report.h"
#include "Income.h"
#include "Withdrawal.h"

class Payment
{
  private:
    int paymentID;
    int paymentDate;
    double paymentAmount;
    char paymentMethod;
    Report*report;
    withdrawal*withdarwal[50];

  public:
    Payment();
    Payment (int pId, int pDate, char pMethod[],double pAmount);
    double getpaymentAmount();
    void validatePayment();
    ~Payment();
}
