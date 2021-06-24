include <stdio.h>
#include <math.h>

int main(void) {
  float sell; /*This is the save variable*/
  float res; /*this is the task variable*/
  printf("how much you sold today?\n");/*enters and records the variable*/
  scanf("%f",&sell);
  res= (sell*5)/100;/*the operation is carried out in order to be able to define the tax*/
  printf("you need to pay %0.2f of tax due you won %0.2f aprox\n",res,sell);
  return 0;
}
