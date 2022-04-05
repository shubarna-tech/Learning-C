#include<stdio.h>
int main (){
int num1,num2,sum,subtraction,a;
printf("enter 1 for addition oe enter 2 for subtraction\n");
scanf("%d",&a);
printf("enter two number \n");
scanf("%d %d", &num1 ,&num2);
if (a==1){
    sum=add(num1 , num2);
    printf("addition = %d",sum);

}
if (a==2){
    subtraction  = sub(num1, num2);
    printf("subtraction = %d", subtraction);

}
else if(a<0)
    printf("error number");
return 0;
}
int add(int a, int b){
int result;
result = a + b;
return result;
}
int sub(int a , int b){
int result;
result = a - b;
return result;
}

