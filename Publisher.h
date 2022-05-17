#include "NormalUser.h"

class Publisher: public NormalUser{
  protected:
    char pID[10];
    char pPassword[12];

  public :
    Publisher();
    Publisher(const char publisherID[],const char publisherpass[], const char cuserID[], const char cpassword[], int cphoneNo, const char cName[], const char cemail[]);
    void setpublisherdetailes();
    void login();
    void makewidthdraw();
    ~ Publisher();
};
