#include<stdio.h>
/*Now, you can convert english units to metric units, prety cool, right*/

float miles, gallon, kelvin;
char engl [1000];

float kilometer, liter, celcius;


int main(void){
printf("Enter miles/gallons/kelvin \n");
fgets(engl, sizeof(engl), stdin);
sscanf(engl, " %f/%f/%f ", &miles, &gallon, &kelvin);

 

  kilometer = miles* 1.609;
  liter = gallon* 3.79;
  celcius = kelvin - 273.1;

  printf("in the metric system this will be \n %.2f  kilometers\n %.2f liters \n %.2f celcius", kilometer, liter, celcius);


  return 0;
}
