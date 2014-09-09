#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,userInput=0;
    printf("please enter base 10 number: ");
    scanf("%d",&num);
    while(userInput!=8&&userInput!=16){
        printf("please select output base [8 or 16]: ");
        scanf("%d",&userInput);
        if(userInput!=8&&userInput!=16) printf("Wrong input! Please try again\n");
    }
    if(userInput==8)  printf("%d base 10 = %o base 8\n",num,num);
    if(userInput==16) printf("%d base 10 = %X base 16\n",num,num);
    return 0;
}
