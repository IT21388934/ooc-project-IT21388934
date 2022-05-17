#include "NormalUser.h"
class allergen{
  private:
    char ingredientName[20];
    char allergenName[20];
  public :
    allergen();
    allergen(const char iName[], const char aName[]);
    void setIngredient(const char iName[]);
    void setAllergen(const char aName[]);
    void displayAllergenicity();
    ~allergen();
};
