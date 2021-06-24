#include<stdio.h>
#include <time.h>
char date[50];

int dayi, monthi, yeari;
int dayf, monthf, yearf;
int total = 0;



int main(void){

  printf("Enter a beging year and a final year in dd/mm/yyyy o dd/mm yyyy: \n");

	fgets(date, sizeof(date), stdin);
	sscanf(date, "%d/%d/%d o %d/%d/%d", &dayi, &monthi, &yeari, &dayf, &monthf, &yearf);


while (yeari < yearf){
  if (( yeari % 4 == 0 && yeari % 100 != 0 ) || yeari % 400 == 0 ) {
  total += 366;
  }


  else{
    total +=365;
  }
yeari ++; 
}


//now with the months
while (monthi < monthf){
  if ( monthi == 1 || monthi == 3 || monthi == 5 || monthi == 7 || monthi == 8 || monthi == 10 || monthi == 12 ) 
  total += 31;

  if ( monthi == 4 || monthi == 6 || monthi == 9 || monthi == 11)
  total += 30;

  
  if (monthi == 2){if ((yeari % 4 == 0 && yeari % 100 != 0) || yeari % 400 == 0 ){
    total += 29;}

    else {total += 28;} 
     }
}


while (dayi < dayf){
  total += 1;
  dayi ++;}

  printf("The total days between are %d", total);


  return 0;
}
