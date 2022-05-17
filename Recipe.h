#include "NormalUser.h"
#include "Payment.h"
#include "LegalRecipeDocument.h"
#include <cstring>

class Recipe{
  private:
    char recipeName[50];
    int recipeID;
    char recipeType[5];
    double recipePrice;
    char mealTime[10];
    Payment*payment; 
    LegalRecipeDocument*legalrecipedocument;

  public:
    Recipe();
    Recipe(const char rName[],const char rType[],double rPrice,const char mTime);
    void setrecipe();
    void generateRecipeID();
    void publishrecipe();
    void editrecipe();
    void deleterecipe();
    void storeRecipeDocumnet(){
      legalrecipedocument = new LegalRecipeDocument();
    };
    ~Recipe();
};
