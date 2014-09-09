#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,temp;
    printf("Enter first number: ");     scanf("%d",&num1);
    printf("Enter second number: ");    scanf("%d",&num2);
    printf("Enter last number: ");      scanf("%d",&num3);
    if(num1<num2){
        temp=num1;num1=num2;num2=temp;
    }
    if(num1<num3){
        temp=num1;num1=num3;num3=temp;
    }
    else if(num2<num3){
        temp=num2;num2=num3;num2=temp;
    }
    printf("%d %d %d",num1,num2,num3);

    return 0;
}
