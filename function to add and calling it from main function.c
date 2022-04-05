#include<stdio.h>
int main(){
 int num1, num2 ,sum;
 printf("enter two numbers\n");
 scanf("%d %d ",&num1,&num2);
 sum=add(num1,num2);
 printf("sum = %d",sum);

}
int add(int a, int b){
int add;
add = a + b ;
return add;

}
