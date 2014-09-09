#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter some number: ");
    scanf("%d",&num);
    if(num%2==0&&num%3==0)  printf("This number is divisible by both 2 and 3\n");
    else if(num%2==0)       printf("This number is divisible by 2\n");
    else if(num%3==0)       printf("This number is divisible by 3\n");
    else                    printf("This number is not divisible by both 2 and 3\n");
    return 0;
}
