#include<stdio.h>
void display (char ch[]);
int main(){
char c[50];
printf("Enter the string\t");
gets(c);
display (c);
return 0;
}
void display(char ch[] ){
printf("string output\t");
puts(ch);
}
