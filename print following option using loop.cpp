#include<stdio.h>
int main()
{
 int i,j,n;
 
 printf("\n Enter the value of n:");
 scanf("%d",&n);
 
 for(i=0;i<=n;i++)
 {
 for(j=1;j<=i;j++)
  {
 printf("%d",i);
  }
 printf("\n");
 }

return 0;

}


