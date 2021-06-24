#include "stdio.h"
int main(void) {
  int xd;
  int i;
  float num;
  float res = 0;
  float resfin; //defino todas las variables a utilizar
  char at[1000];
  printf("how many resistance you need to sum?\n");
 fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&xd); 
  for (i = 1; i<=xd;i++){
    printf("\n"); 
    printf("give me resistance %d \n",i);  
     fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&num); 
    res=res+(1/num); 
    if (i==xd){
      break;
    }
    printf("the resistance %d of this operation chain is %0.2f Xohms\n",i,num); 
   }
   resfin=1/res;
   
    printf("the resistance %d was %0.2f Xohms, the total parallel resistance is %0.2f Xohms where X is the unit amplifier (milli, micro, kilo, etc.)",i,num,resfin);
  
  return 0;
}
