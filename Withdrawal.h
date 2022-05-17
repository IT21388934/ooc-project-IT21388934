#include "Income.h"
#include "Publisher.h"
class withdrawal{
private : 
  int withdrawalID;
  int withdrawalDate;
  int totalIncome;
  Publisher*withdraw;

public :
  withdrawal();
  withdrawal(int wID,int wDate);
  void setwithdrawdetails();
  void calTotal(Income*i);
  void transferAmount();
  ~withdrawal();
};
