#include "LegalRecipeDocument.h"
#include <iostream>
#include <cstring>

LegalRecipeDocument::LegalRecipeDocument(){
  strcpy(documentType,"None");
  documentID=0;
}

LegalRecipeDocument::LegalRecipeDocument(const char dType[10]){
  strcpy(documentType,dType);
}

void LegalRecipeDocument::genarateDocumentID(){
  
};

void LegalRecipeDocument::downloadrecipe(){
  
};

LegalRecipeDocument::~LegalRecipeDocument(){
  //destructor
};

