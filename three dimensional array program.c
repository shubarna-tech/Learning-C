#include<stdio.h>
int main(){
int i,j, k;
int a[2][2][2];
for (i=0;i<2;i++)
    for(j=0;j<2;j++)
    for(k=0;k<2;k++)
  {

   printf("enter a[%d][%d][%d]=\n",i,j,k);
scanf("%d",&a[i][j][k]);
  }
  for (i=0;i<2;i++)
    for(j=0;j<2;j++)
    for(k=0;k<2;k++)

printf("a[%d][%d][%d]=%d\n",i,j,k,a[i][j][k]);
return 0;
}
