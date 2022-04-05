#include<stdio.h>
int main(){
int num1,num2,total1;
float num3, num4,total2, grand_total;
 printf("Enter number1\n");
 scanf("%d",&num1);
 printf("Enter number2\n");
 scanf("%d",&num2);
  printf("Enter number3\n");
 scanf("%f",&num3);
 printf("Enter number4\n");
 scanf("%f",&num4);
 total1 = num1+num2;
 printf("total for first = %d", total1);
 total2 = num3+num4;
 printf("total for second =%f",total2);
 grand_total=total1+total2;
 printf("grand total = %f", grand_total);
 return 0;
}
