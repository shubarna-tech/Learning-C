#include<stdio.h>
/*
Author = Shubarna Adhikari
date = 2022/15/3

 program to print the given days into year , month and days

*/
int main()
{
    int yourdays,year,month,days, rd ;//where rd symbolizes remaining days
    printf("enter days \n");
    scanf("%d",&yourdays);
    year  = yourdays/365;
    rd = yourdays%365;
    month = rd/30;
    days = rd%30;
    printf("year=%d month=%d days=%d",year,month,days);
    return 0;
    }
