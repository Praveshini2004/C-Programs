#include <stdio.h>
int main() {
  int n,i=0;
   printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=15;i++)
    {
        printf("\n%d X %d = %d",n,i,n*i);
    }
   return 0;
}