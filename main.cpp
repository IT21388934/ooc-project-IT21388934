#include "Administrator.h"
#include "allergen.h"
#include "Income.h"
#include "LegalRecipeDocument.h"
#include "NoramlUser.h"
#include "Payment.h"
#include "Publiher.h"
#include "Recipe.h"
#include "Report.h"
#include "visitor.h"
#include "Withdrawal.h"

#include <iostream>

using namespace std;

int main(){

  Administrator*adm = new Administrator();
  allergen*all = new allergen();
  Income*in= new Income();
  LegalRecipeDocument*lrd= new LegalRecipeDocument();
  NormalUser*nu = new NormalUser();
  Payment*pay = new Payment();
  Publisher*pub = new Publisher();
  Recipe*rcp = new Recipe();
  Report*rpt = new Report();
  visitor*vis = new visitor();
  withdrawal*with =new withdrawal();

  adm -> setadmindetails();
  adm -> setlogin();
  adm -> displayAdminDetails();

  all -> setIngredient();
  all -> setAllergen();
  all -> displayAllergenicity();

  in -> displayIncome();
  in -> calIncome;
  in -> getpublishertotal();

  lrd -> setDoumentDetails();
  lrd -> genarateDocumentID();
  lrd -> downloadrecipe();

  nu -> normaluserdetails();
  nu -> login();
  nu -> becomePubliser();

  pay ->validatePayment();
  pay ->getpaymentAmount();

  pub -> setpublisherdetailes();
  pub -> login();
  pub -> makewidthdraw();

  rcp -> setrecipe();
  rcp -> generateRecipeID();
  rcp -> publishrecipe ();
  rcp -> editrecipe ();
  rcp -> deleterecipe ();
  rcp -> storeRecipeDocumnet ();

  rpt -> setreport();
  rpt -> createReport();

  vis -> setvisitordetailes();
  vis -> searchrecipe();

  with -> setwithdrawdetails();
  with -> calTotal();
  with -> transferAmount();

  delete adm;
  delete all;
  delete in;
  delete nu;
  delete pay;
  delete pub;
  delete rcp;
  delete rpt;
  delete vis;
  delete with;
  delete lrd;
  
  return 0;
}
