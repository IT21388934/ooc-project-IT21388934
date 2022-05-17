#include "Recipe.h"

class LegalRecipeDocument{
  private:
    char documentType[10];
    int documentID;

  public:
      LegalRecipeDocument();
      LegalRecipeDocument(const char dType[10]);
      void setDoumentDetails();
      void genarateDocumentID();
      void downloadrecipe();
      ~LegalRecipeDocument();
      
}
