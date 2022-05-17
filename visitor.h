class visitor{
protected : 
  char name[20];
  char email[30];

public :
  visitor();
  visitor ( const char cName[20], const char cemail[30]);
  void setvisitordetailes();
  void searchrecipe();
  ~ visitor();
}
