#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter some number: ");
    scanf("%d",&num);
    if(num%2==0) printf("This number is even number\n");
    else         printf("This number is odd number\n");
    return 0;
}
