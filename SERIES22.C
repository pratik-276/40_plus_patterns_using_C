#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int i,j,n,k;
 clrscr();
 printf("enter the number of rows \n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  k=1;
  for(j=1;j<=(2*n)-1;j++)
  {
   if(j>=n+1-i&&j<=n-1+i)
   printf("%d",k++);
   else
   printf(" ");
  }
  printf("\n");
 }
 getch();
}