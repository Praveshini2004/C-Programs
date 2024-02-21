
#include <stdio.h>
int main()
{
    int i,n,num1=0,num2=1,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d %d",num1,num2);
    for(i=2;i<n;i++){
        sum=num1+num2;
        printf(" %d",sum);
        num1=num2;
        num2=sum;
    }
    return 0;
}
