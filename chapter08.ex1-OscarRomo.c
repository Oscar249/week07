#include <stdio.h>
int main(void) {
  int xd;
  int down;
  char at[1000];
  printf("how many you want to see to the right?\n");
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%f %f",&xd);
  printf("and down? \n");
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%f %f",&down); 
  for (int e=0 ; e <down; e++){ 
  for (int i=0 ; i <xd;i++){ 
  printf("+-----");
  }
  printf("+");
  printf("\n");
  printf("|");
  for (int i=0 ; i <xd;i++){
  printf("    |");
  }
  printf("\n");
  printf("|");
  for (int i=0 ; i <xd;i++){
  printf("    |");
  }
  printf("\n");
  printf("|");
  for (int i=0 ; i <xd;i++){
  printf("    |"); 
  }
  printf("\n");
  }
   for (int i=0 ; i <xd;i++){
  printf("+-----"); 
  }
return 0;
}
