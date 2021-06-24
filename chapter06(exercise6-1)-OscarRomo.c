#include <stdio.h>
#include <math.h>/*Now we doing math*/
/*The porpuse of this command lines is found the square of the distance between two points */
float X1,  Y1;
float X2,  Y2;
float t,  yt;
float raiz;

int main(void){
 X1 = 5;
 Y1 = 7;

 X2 = 8;
 Y2 = 9;

raiz = sqrt( ((X2-X1)*(X2-X1)) + ((Y2-Y1)*(Y2-Y1)) ) ;

printf("the square of the points is %.2f", raiz);
return 0;
}
