#include <stdio.h>
int verdad(int xd); 

int main(void) {
  int xd; /*Define the number variable*/
  printf("Tell me a number, please: \n"); 
  scanf("%d", &xd); 
  if (verdad(xd)) {
    printf("Is prime"); /*a prime is defined as a number that can only be divided between 1 and 0 without leaving decimals.*/
  } else {
    printf("Is not prime"); /*these can be divided with other numbers without leaving decimals*/
  }
  return 0;
}

int verdad(int xd) {
  if (xd == 0 || xd 1) return 0; /*condition is fulfilled and returns to return 0*/
  if (xd == 4) return 0; /*this condition is fulfilled and we return to return 0*/
  for (int x = 2; x < xd / 2; x++) {
    if (xd % x == 0) return 0; /*the condition is fulfilled and returns to the above variable*/
  }
  return 1;
}
