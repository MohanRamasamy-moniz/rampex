#include <stdio.h>

int main() {
  float temperature;
  printf("enter the temperature in celcius:");
  scanf("%f",&temperature);
  if(temperature <10){
      printf("output suggestion: jacket\n");
  }
  else if (temperature>=10 && temperature<=20){
  printf("output suggestion:sweater\n");
  }
  else{
      printf("wear tshirt");
  }
    return 0;
}