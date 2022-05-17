#include "visitor.h"
#include "Recipe.h"
#include "allergen.h"
#define SIZE 100

class NormalUser : public visitor{
  protected :
    char userID[10];
    char userPassword[12];
    int phoneNo;
    Recipe*recipe[SIZE];
    allergen*allergen[12];

  public:
    NormalUser();
    NormalUser( const char cuserID[10], const char cpassword[12], int cphoneNo, const char cName[], const char cemail[]);
    void normaluserdetails();
    void login();
    void becomePubliser();
    ~ NormalUser();
}
