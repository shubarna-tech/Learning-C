#include<stdio.h>
#include<stdio.h>
int main(){
char str1[10]="Hello";
char str2[10]="World";
char str3[10];
int len;
strcpy(str3,str1);
printf("strcpy :%s\n",str3);
strcat(str1,str2);
printf("strcat:%s\n",str1);
len=strlen(str1);
printf("strlen :%d\n",len);
return 0;





}
