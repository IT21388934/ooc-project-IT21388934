
#include "Recipe.h"
#include <iostream>
#include <cstring>

Recipe::Recipe(){
  strcpy(recipeName,"");
  strcpy(recipeID,"");
  strcpy(recipeType,"");
  recipePrice=0;
  strcpy(mealTime,"");
}

Recipe::Recipe(const char rName[],const char rType[],double rPrice,const char mTime){
  strcpy(recipeName,rName);
  strcpy(recipeID,rName);
  strcpy(recipeType,rType);
  recipePrice=rPrice;
  strcpy(mealTime,mTime);
}

void Recipe::generateRecipeID(){
  
}

void Recipe::publishrecipe(){
  
};

void Recipe::editrecipe(){
  
};

void Recipe::deleterecipe(){
  
};

Recipe::~Recipe(){
  //destructor
}
