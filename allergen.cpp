#include "allergen.h"
#include <iostream>
#include <cstring>
using namespace std;

allergen::allergen(){
  strcpy(ingredientName,"");
  strcpy(allergenName,"");
}

allergen::allergen(const char iName[], const char aName[]){
  strcpy(ingredientName,iName);
  strcpy(allergenName,aName);
}
void allergen::setIngredient(const char iName[]){
  strcpy(ingredientName,iName);
}

void allergen::setAllergen(const char aName[]){
  strcpy(allergenName,aName);
}

void allergen::displayAllergenicity(){
 strcmp(ingredientName,allergenName);
  if (ingredientName[]==allergenName[]){
    cout<<ingredientName[]<<"is a allergen"<<endl;
  }
}

allergen::~allergen(){
  //destructor
}

