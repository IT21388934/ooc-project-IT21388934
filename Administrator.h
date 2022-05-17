#include "Report.h"

class Administrator{
  private:
    char adminID[10];
    char adminName[20];
    char adminemail[30];
    int adminphoneNo;
    char adminpassword[12];
    Report*report[SIZE];

  public:
    Administrator();
    Administrator(int aID, char aName[],  char aEmail[], int aPhoneNo, char aPassword[] );
    void setadmindetails();
    void setlogin();
    void displayAdminDetails();
    ~ Administrator();
}
