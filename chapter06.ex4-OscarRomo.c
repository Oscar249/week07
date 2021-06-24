#include <stdio.h>
/*If you put an amount of money(less than $1.00), the program compute the number in quarters, dimes, nickles, and pennies,  ¡¡¡¡DING DING DING MONEY MONEY!!!!*/
float money = 0;
float quarter = 0;
float dime = 0;
float nickel = 0;
float pennie = 0;
char line [50];

int main(void){
 printf("introduce cents, more than 0 and smaller or equal to 99 \n");
 fgets(line, sizeof (line), stdin);
 sscanf(line, "%f", &money);

 while (1) {
  if (money >= 25) {
    ++quarter; /*start value= 0, so with the ++ I add 1 to my value*/   
    money -= 25; /*25 minus my cent = money*/ 
    }

/* but well, the first condition is not possible, so we goes with the next one*/

  else if (money >=10){
    ++dime;
    money -= 10;
  }

  else if (money >= 5){
    ++nickel;
    money -= 5;
  }

  else if (money >= 1){
    ++pennie;
    --money; /* now I rest 1 to my money = cents*/   
  }


  else if (money == 0)

  break;   

 }

printf("quarter %0.f   dime %0.f   nickel %0.f   pennie %0.f ", quarter, dime, nickel, pennie);
return 0;
}
