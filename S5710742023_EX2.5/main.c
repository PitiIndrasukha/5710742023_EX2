#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA,numB,sum;
    printf("Enter number a: ");
    scanf("%d",&numA);
    printf("Enter number b: ");
    scanf("%d",&numB);
    sum=numA-numB;
    if(sum<0) sum = -sum ;
    printf("|a-b| = %d",sum);
    return 0;
}
