#include<stdio.h>
float size;
float time;
float time2;
char line[10000000];


int main(void){
 printf("Please introduce the amount of characters in the file \n");
 fgets(line, sizeof(line), stdin);
 sscanf(line, "%f", &size);


while (size > 0){
  if (size > 960){
    time ++;
    size -= 960;
  }
  
  if (size <= 960){
    time2= (size*1)/960;
    break;
   
  }
