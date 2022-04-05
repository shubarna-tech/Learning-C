#include<stdio.h>
void swap(int *a,int *b);
int main (){
int num1=6, num2=98;
swap (&num1,&num2);
printf("number1= %d\t",num1);
printf("number2= %d\t",num2);
return 0;
}
void swap (int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;

}
