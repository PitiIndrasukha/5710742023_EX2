#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    printf("Please enter score[0-100]: ");
    scanf("%d",&score);
    if(score>=80)        printf("Your grade: A");
    else if(score>=70)   printf("Your grade: B");
    else if(score>=60)   printf("Your grade: C");
    else if(score>=50)   printf("Your grade: D");
    else                 printf("Your grade: F");
    return 0;
}
